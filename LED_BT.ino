#include <SoftwareSerial.h>
SoftwareSerial BTSerial(2,3);
byte a=0;
int LED=8;

void setup(){
  Serial.begin(9600);
  Serial.println("Hello!");
  BTSerial.begin(9600);
  pinMode(LED,OUTPUT);
}

void loop(){
  if(BTSerial.available()){
  a = BTSerial.read();
  BTSerial.write(a);
  if(a==49){   BTSerial.write("led on ");
     digitalWrite(LED,HIGH);
   }
  if(a==48){   BTSerial.write("led off ");
    digitalWrite(LED,LOW);
   }
  }
}
