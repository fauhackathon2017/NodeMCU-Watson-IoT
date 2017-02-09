/*
 * This code prints out the MAC address of the ESP8266
 */

#include <ESP8266WiFi.h>

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
