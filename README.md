# CpuRamMonitor
Cpu and Ram usage monitor on an Arduino nano and a Waveshare 1.54" e-Paper display.

Created by Alejandro Alvarez (Nomte), based on a sample code of the GxEPD Library
by Jean-Marc Zingg ( https://github.com/ZinggJM/GxEPD ). Also based on the code from
Arduino Forums "Serial Input Basics" by Robin2 ( https://forum.arduino.cc/index.php?topic=396450.0 ).

Pinout from display: Busy=D7, Reset=D8, DC=D9, CS=D10, CLK=D13, DIN=D11, GND=GND, VCC=3V3;

IMPORTANT: Change the COM port in the Python code (default: COM5) in order to match your own COM port number.

The screen make data numbers refresh every 2 seconds and a complete display refresh every 2 hours. That is healthy for the display.

