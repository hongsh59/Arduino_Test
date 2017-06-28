// << Sonic_Serial.ino >>
#define ECHOPIN 2      // echo pulse receive pin
#define TRIGPIN 3       // trigger signal sending pin
void setup(){
  Serial.begin(9600);
  pinMode(ECHOPIN, INPUT);
  pinMode(TRIGPIN, OUTPUT);
}
void loop(){
  digitalWrite(TRIGPIN, LOW);    // trigger pin 2[uS] “LOW”
  delayMicroseconds(2);
  digitalWrite(TRIGPIN, HIGH);   // “ranging” triggering 10[uS] “HIGH”
  delayMicroseconds(10);
  digitalWrite(TRIGPIN, LOW);           // trigger pin “LOW”
  int distance = pulseIn(ECHOPIN, HIGH);     // pulse time reading
  distance= distance/58;           // calculate distance via pulse time
  Serial.println(distance);
  delay(50);                           // waiting 50[mS] for next action
}
