/*
 ESP8266 Analog Input
*/

int valOI = 0;
void setup() {
  pinMode(A0, INPUT);     // Set the Analog pin to INPUT mode
  pinMode(D1, OUTPUT);    // Set the external LED pin to OUTPUT mode
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(D1, LOW);  // Turn the LED off by making the voltage HIGH
  valOI= analogRead(A0);   // Read the analog data.  Such as, light sensor data.
  Serial.println(valOI);  // Print that data.
  
  delay(1000);                      // Wait for a second
 
  digitalWrite(D1, HIGH);  // Turn the LED off by making the voltage HIGH
  
  delay(1000);                      // Wait for a second
}
