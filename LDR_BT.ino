// << LDR_BT.ino >>
#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2, 3); //Connect HC-06. (TX, RX) settings
void setup()
{
  Serial.begin(9600);
  Serial.println("Hello!");
  BTSerial.begin(9600); // set the data rate for the BT port
}
void loop()
{
  int light = analogRead(A5);
  BTSerial.println(light);
  delay(200);
}
