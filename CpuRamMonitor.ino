//
// Cpu and Ram usage monitor on an Arduino nano and a Waveshare 1.54" e-Paper display.
//
// Created by Alejandro Alvarez (Nomte), based on a sample code of the GxEPD Library
// by Jean-Marc Zingg ( https://github.com/ZinggJM/GxEPD ). Also based on the code from
// Arduino Forums "Serial Input Basics" by Robin2 ( https://forum.arduino.cc/index.php?topic=396450.0 ).
// 
// Pinout from display: Busy=D7, Reset=D8, DC=D9, CS=D10, CLK=D13, DIN=D11, GND=GND, VCC=3V3;
//

#include <GxEPD.h>
#include <GxGDEP015OC1/GxGDEP015OC1.h>
#include <GxIO/GxIO_SPI/GxIO_SPI.h>
#include <GxIO/GxIO.h>
// Free fonts from Adafruit_GFX
#include <Fonts/FreeMonoBold24pt7b.h>
#include "Background.h"

GxIO_Class io(SPI, /*CS=*/ SS, /*DC=*/ 9, /*RST=*/ 8); // arbitrary selection of 8, 9 selected for default of GxEPD_Class
GxEPD_Class display(io /*RST=9*/ /*BUSY=7*/); // default selection of (9), 7

//////////////////////////////////

#if defined(_GxGDEP015OC1_H_)
const uint32_t partial_update_period_s = 1;
#endif

// variables del pilladatos
const byte numChars = 32;
char receivedChars[numChars]; // an array to store the received data
String UsoCPU = "N/A";
String UsoRAM = "N/A";

// Variables de la libreria de la pantalla
uint32_t start_time;
uint32_t next_time;
uint32_t previous_time;
uint32_t total_seconds = 0;
uint32_t seconds;

void setup(void)
{
  Serial.begin(9600);
  display.init(); // disable diagnostic output on Serial
  display.setTextColor(GxEPD_BLACK); //Color del texto
  display.setRotation(0);

  // draw background
#if defined(__AVR) && defined(_GxGDEW042T2_H_)

  // cope with code size limitation
  display.drawExampleBitmap(BitmapExamples1, sizeof(Background1));
  display.setFont(&FreeMonoBold24pt7b);
#else
  display.drawExampleBitmap(Background1, 0, 0, GxEPD_WIDTH, GxEPD_HEIGHT, GxEPD_BLACK);
  display.update();
  display.setFont(&FreeMonoBold24pt7b);
#endif
  // partial update to full screen to preset for partial update of box window
  // (this avoids strange background effects)
  display.drawExampleBitmap(Background1, sizeof(Background1), GxEPD::bm_default | GxEPD::bm_partial_update);
  start_time = next_time = previous_time = millis();
  display.setRotation(3);
}

void loop()
{ // LOOP START
  recvWithEndMarker();
  uint32_t actual = millis();
  while (actual < next_time)
  {
    // the "BlinkWithoutDelay" method works also for overflowed millis
    if ((actual - previous_time) > (partial_update_period_s * 1000))
    {
      //Serial.print(actual - previous_time); Serial.print(" > "); Serial.println(partial_update_period_s * 1000);
      break;
    }
    delay(100);
    actual = millis();
  }

  previous_time = actual;
  next_time += uint32_t(partial_update_period_s * 1000);
  total_seconds += partial_update_period_s;
  seconds = total_seconds % 60;


#if defined(__AVR)
  showPartialUpdate_AVR();
#else
  showPartialUpdate();
#endif

} // LOOP END


void drawCallback() // SCREEN DRAWING
{
  char justificadoCPU = ' ';
  char segundojustificadoCPU = ' ';
  char justificadoRAM = ' ';
  char segundojustificadoRAM = ' ';
  uint16_t box_x = 85; //Posicion X
  uint16_t box_y = 55; //Posicion Y
  uint16_t box_w = 110; //Dimension X
  uint16_t box_h = 100; //Dimension Y
  uint16_t cursor_y = box_y + 33; //Offset cursor en vertical default:+33
  // Justification of the CPU and RAM values. Show "N/A" if no data is received.
  if (UsoCPU == "N/A") {justificadoCPU = 0x00;}
  if (UsoCPU.toInt() >= 10) {justificadoCPU = 0x00;}
  if (UsoCPU.toInt() >= 100) {segundojustificadoCPU = 0x00;}
  if (UsoRAM == "N/A") {justificadoRAM = 0x00;}
  if (UsoRAM.toInt() >= 10) {justificadoRAM = 0x00;}
  if (UsoRAM.toInt() >= 100) {segundojustificadoRAM = 0x00;}
  
  display.fillRect(box_x, box_y, box_w, box_h, GxEPD_WHITE); //Color of the background of the update
  display.setCursor((box_x - 4), cursor_y); //Posicion inicial (Cursor X, Y+Offset)
  display.print(justificadoCPU); display.print(segundojustificadoCPU) ; display.print(UsoCPU); display.print("%");
  display.setCursor((box_x - 4), (cursor_y + 55)); //Posicion inicial (Cursor X, Y+Offset) default:+58
  display.print(justificadoRAM); display.print(segundojustificadoRAM) ; display.print(UsoRAM); display.print("%");
}

void showPartialUpdate_AVR() // SCREEN UPDATE
{
  uint16_t box_x = 85; //Posicion X
  uint16_t box_y = 55; //Posicion Y
  uint16_t box_w = 110; //Dimension X
  uint16_t box_h = 100; //Dimension Y
  uint16_t cursor_y = box_y + 33; //Offset cursor en vertical
  display.drawPagedToWindow(drawCallback, box_x, box_y, box_w, box_h);
}


void recvWithEndMarker() // DATA RECEPTION AND CLASSIFICATION BY ENDMARKER
{
 static byte ndx = 0;
 char endMarkerCPU = '#';
 char endMarkerRAM = '$';
 char rc;
 //char lastRead = "lastReadWasCpu";
 
    while (Serial.available() > 0)
  {
    rc = Serial.read();
    if (rc != endMarkerCPU && rc != endMarkerRAM) {
        receivedChars[ndx] = rc;
        ndx++;
    }
    else if (rc == endMarkerCPU)
          {          
          receivedChars[ndx] = '\0'; // terminate the string
          ndx = 0;
          UsoCPU = String(receivedChars); //Convert the Bytes received into a String variable.
          }
    else  { 
          receivedChars[ndx] = '\0'; // terminate the string
          ndx = 0;
          UsoRAM = String(receivedChars); //Convert the Bytes received into a String variable.      
          }
  }
}
