#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2,3);
int button = 13;        // Pin setup

void setup(){
Serial.begin(9600);
Serial.println("Hello!");
BTSerial.begin(9600);
pinMode(button,INPUT);
}
void loop(){
if(digitalRead(button) == LOW)
{
BTSerial.write("0");
}
if(digitalRead(button) == HIGH)
{
BTSerial.write("1");
}
 delay(500);
}
