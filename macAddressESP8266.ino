/*
 * This code prints out the MAC address of the ESP8266
 */

#include <ESP8266WiFi.h>
#include <ESP8266WiFiAP.h>
#include <ESP8266WiFiGeneric.h>
#include <ESP8266WiFiMulti.h>
#include <ESP8266WiFiScan.h>
#include <ESP8266WiFiSTA.h>
#include <ESP8266WiFiType.h>
#include <WiFiClient.h>
#include <WiFiClientSecure.h>
#include <WiFiServer.h>
#include <WiFiUdp.h>

int completionStatus=0;
void setup() {
  Serial.begin(9600);
}

void loop() {
  if(completionStatus<1){
    Serial.println("Trying to access MAC Address");
    completionStatus+=1;
    String macAddressOI= WiFi.macAddress();
    Serial.print("ESP8266 Mac address: ");
    Serial.println(macAddressOI);
  }
}
