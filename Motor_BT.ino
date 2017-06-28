#include <SoftwareSerial.h>        //  <<  Motor_BT.ino >>
SoftwareSerial BTSerial(8, 9);
const int motorPins = 3;             // motor connect D3
void setup() {
    BTSerial.begin(9600);
}
void loop() {
    if (BTSerial.available())
{
    char ch = BTSerial.read();
    if(ch >= '0' && ch <= '9')              // “ch”is number 0 ~9
      {
           int speed = map(ch, '0', '9', 0, 255);
            // Convert 0~9 to 0~255
           analogWrite(3, speed);
           BTSerial.println(" ");
           BTSerial.println(speed);
        }
     else  {
               BTSerial.print("Unexpected character ");
               BTSerial.println(ch);    }  }
 }
