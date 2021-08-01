/*
 *  Date   : 18 Jul 21
 *  Author : Brinth Khanna
 *  e-mail : brinthkhanna@yahoo.com
 *  
 *  Brief   :This sketch updates ILI9341 display with incoming UDP stream
 *            if stream is not found then shows menu 
 *            
 */

#include <stdio.h>
#include <stdint.h>
//ILI9341 Display headers
#include <TFT_eSPI.h>
#include <SPI.h>
//UDP headers
#include <WiFi.h>
#include <WiFiUdp.h>

//MACROS
#ifdef USE_SERIAL
#define PRINT(X...)     Serial.print(X)
#define PRINTLN(X...)   Serial.println(X)
#endif

//Global variables and Constants
const char* ssid         = "Jeyaraman_Jio_WiFi";
const char* password     = "Jga65*452=-yg"; 
const char* udpAddress   = "192.168.29.200";
const int   udpPort      = 2222;

//Instatiate classes
WiFiUDP udp;


void printWiFiConnectionInfo()
{
  PRINT("SSID       : "); PRINTLN(ssid);
  PRINT("LOCAL IP   : "); PRINTLN(WiFi.localIP());
}

void setup()
{
  Serial.begin(9600);
  WiFi.begin(ssid, password);
  PRINTLN("WiFi begun");

  while(WiFi.status(0 != WL_CONNECTED)
  {
    delay(500);
    PRINT(".");
  }
  printWiFiConnectionInfo();
  udp.begin(udpPort);
}

void loop()
{
  
}
