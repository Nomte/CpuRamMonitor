#ifndef _GxBitmapExamples_H_
#define _GxBitmapExamples_H_

#if defined(ESP8266) || defined(ESP32)
#include <pgmspace.h>
#else
#include <avr/pgmspace.h>
#endif

const unsigned char logo[] PROGMEM = {
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFE, 0x1F, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF,
0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xFC,
0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03,
0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xFF,
0xF8, 0x07, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0x80, 0x7F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C,
0x03, 0xFF, 0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF,
0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFE, 0x1F, 0x80, 0x7E, 0x1F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xC0, 0x3F, 0x0F,
0xFF, 0xF8, 0x07, 0xE1, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF,
0xFC, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC,
0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE,
0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xF8, 0x07, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0x03, 0xFF,
0xF8, 0x07, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xFF, 0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F,
0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFE,
0x1F, 0x80, 0x7E, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0x0F, 0xC0, 0x3F, 0x0F, 0xFF, 0xF8, 0x07, 0xE1, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xF0, 0xFC, 0x03,
0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF,
0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFE,
0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0x0F, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xF8, 0x07,
0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xFF,
0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
0x7E, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0x0F, 0xC0, 0x3F, 0xFF, 0xFF, 0xFE, 0x1F, 0x80, 0x7C, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xC0, 0x3F, 0x0F, 0xFF, 0xF8,
0x07, 0xE1, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFE, 0x07, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFC, 0x03,
0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFE, 0x1F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF,
0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xF8, 0x07, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07,
0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xFF, 0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF,
0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFE, 0x1F, 0x80,
0x7E, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0x0F, 0xC0, 0x3F, 0x0F, 0xFF, 0xF8, 0x07, 0xE1, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xF0, 0xFC, 0x03, 0xFF, 0xF8,
0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01,
0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFE, 0x1F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF,
0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xF8, 0x07, 0xE1, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xFF, 0xFE, 0x1F,
0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF,
0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F,
0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xC0, 0x3F, 0xFF, 0xFF, 0xFE, 0x1F, 0x80, 0x7E, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xC0, 0x3F, 0x0F, 0xFF, 0xF8, 0x07, 0xE1,
0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFE, 0x07, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFC, 0x03, 0xFF, 0xF0,
0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01,
0xFF, 0xF0, 0x03, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xF8, 0x01, 0xFF, 0xF8, 0x07, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0x80, 0x7F,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xC0, 0x3C, 0x03, 0xFF, 0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xFF, 0xFF,
0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF,
0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F,
0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFE, 0x1F, 0x80, 0x7E, 0x1F,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F,
0xC0, 0x3F, 0x0F, 0xFF, 0xF8, 0x07, 0xE1, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF,
0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFE, 0x07, 0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0,
0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0x01,
0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xF8, 0x07, 0xE1, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0,
0xFC, 0x03, 0xFF, 0xF8, 0x07, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xFF, 0xFE, 0x1F, 0x80, 0x7F,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF,
0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F,
0xFF, 0xFF, 0xFE, 0x1F, 0x80, 0x7E, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xC0, 0x3F, 0x0F, 0xFF, 0xF8, 0x07, 0xE1, 0xFC, 0x0F,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07,
0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x03, 0xFF,
0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x03,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0,
0x03, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01,
0xFF, 0xF8, 0x07, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x80,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0x80, 0x7F, 0xFF, 0xFF,
0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xC0,
0x3C, 0x03, 0xFF, 0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x3F,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F,
0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0xE0, 0x7F, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF,
0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFE, 0x1F, 0x80, 0x7E, 0x1F, 0xFF, 0xFF,
0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xC0, 0x3F,
0x0F, 0xFF, 0xF8, 0x07, 0xE1, 0xFC, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF,
0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F,
0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07,
0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF,
0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF,
0xFC, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFF, 0xFF, 0xFF,
0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
0x3F, 0xFF, 0xFF, 0xFF, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0x01, 0xFF, 0xF0,
0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00,
0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x01, 0xFF, 0xF8, 0x07, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0x03,
0xFF, 0xF8, 0x07, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xFF, 0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF,
0xFF, 0x00, 0x00, 0x03, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xC0,
0x3F, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF,
0xFF, 0xE0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F,
0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0x3F, 0xFF, 0xFF,
0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF,
0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xF8, 0x07, 0xE1, 0xFE, 0x1F, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xF0, 0xFC,
0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFE, 0x07,
0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFC, 0x00, 0x03, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF,
0xFC, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x00, 0x00, 0xFF, 0xFF,
0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x01,
0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0x01, 0xFF, 0xF8,
0x07, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00,
0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0x00,
0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03,
0xFF, 0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x80,
0x3F, 0xE0, 0x1F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF,
0xFF, 0xE0, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xF8, 0x1F, 0xFF, 0xFF, 0xFF, 0x80,
0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xC1, 0xE1, 0xE0, 0x3F, 0xFF, 0xFF,
0xFF, 0x83, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F,
0xFF, 0xFF, 0xFF, 0x83, 0xE1, 0xF0, 0x3F, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF,
0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xE1, 0xF8, 0x3F,
0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF,
0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0x07, 0xE1, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFC, 0x1F,
0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFE, 0x0F, 0xE1,
0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF,
0xF8, 0x07, 0xE1, 0xFE, 0x1F, 0xFF, 0xFE, 0x0F, 0xE1, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF,
0xF0, 0x3F, 0xFF, 0xFF, 0x0F, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFE,
0x0F, 0xE1, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xE0, 0x7F, 0xFF, 0xFE, 0x07, 0xFF, 0xFC,
0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFE, 0x0F, 0xC1, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF,
0x07, 0xFF, 0xC0, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F,
0xFF, 0xFE, 0x07, 0x83, 0xF8, 0x3F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFE, 0x07,
0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFE, 0x00, 0x03, 0xF0, 0x7F, 0xFF,
0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF,
0xFE, 0x1F, 0xFF, 0xFE, 0x00, 0x03, 0xF0, 0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF,
0xFF, 0x0F, 0xFF, 0xF8, 0x01, 0xFF, 0xF8, 0x07, 0xE1, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x07, 0xF0,
0x7F, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0xFC, 0x03, 0xFF, 0xF8,
0x07, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0x80, 0x0F, 0xE0, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00,
0x3F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xFF, 0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xC0,
0x1F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F,
0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80,
0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFE, 0x1F,
0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xF8, 0x07, 0xE1, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFE,
0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xF0, 0xFC, 0x03, 0xFF,
0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x83, 0xFF,
0xF0, 0x7F, 0xFF, 0xFE, 0x07, 0xFF, 0xFC, 0x03, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF,
0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0x83, 0xFF, 0xF8, 0x3F, 0xFF, 0xFE, 0x07, 0xFF, 0xF8,
0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x7F, 0xFF, 0xFF, 0xFF,
0x07, 0xFF, 0xF8, 0x3F, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F,
0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFC, 0x1F, 0xFF, 0xFE, 0x07,
0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x3F, 0xFF,
0xFF, 0xFF, 0x07, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0x0F, 0xFF, 0xF8, 0x01, 0xFF, 0xF8, 0x07, 0xE1,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFC, 0x1F, 0xFF,
0xFF, 0xFF, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8,
0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3C, 0x03, 0xFF, 0xFE,
0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFC,
0x1F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xF8, 0x3F, 0xFF, 0xFF, 0xFF, 0x07, 0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF,
0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xF0, 0x7F, 0xFF, 0xFF, 0xFF, 0x07,
0xFF, 0xFC, 0x1F, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xE0, 0x7F, 0xFF, 0xFF, 0xFF, 0x03, 0xFF, 0xF8, 0x1F, 0xFF, 0xFF, 0xFF, 0x80,
0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF,
0xFF, 0x01, 0xFF, 0xF0, 0x3F, 0xFF, 0xFF, 0xFF, 0x80, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0xFF, 0xE0, 0x3F, 0xFF, 0xFF,
0xFF, 0xC0, 0x3F, 0xFF, 0xFF, 0xFE, 0x1F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x07, 0xFF,
0xFF, 0xFF, 0xFF, 0x80, 0x3F, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0xC0, 0x3F, 0x0F, 0xFF, 0xF8, 0x07,
0xE1, 0xFE, 0x1F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0x7F,
0xFF, 0xFF, 0x0F, 0xF0, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0x00, 0x00,
0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xC0, 0x00, 0x00, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xFC, 0x03, 0xFF,
0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xE0, 0x00,
0x01, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF,
0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0x03, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8,
0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFC, 0x0F, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x7F, 0xFF, 0xFF, 0xFF,
0xFC, 0x00, 0x0F, 0xFF, 0xFF, 0xFE, 0x07, 0xFF, 0xF8, 0x01, 0xFF, 0xF0, 0x03, 0xFF, 0xFE, 0x1F,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x80, 0x7F, 0xFF, 0xFF, 0xFF, 0x0F,
0xFF, 0xF8, 0x01, 0xFF, 0xF8, 0x07, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x03, 0xFF, 0xF8, 0x07, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFC, 0x03, 0xFF, 0xFE, 0x1F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x0F, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,  
};  


#define Background1 logo
#endif

