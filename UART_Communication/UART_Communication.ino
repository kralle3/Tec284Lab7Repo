 #include <SoftwareSerial.h>
 #include <Wire.h>

 SoftwareSerial mySerial(6,5); //rx , tx pins

 void setup() {
  // put your setup code here, to run once:
 Serial.begin(9600);
 mySerial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
mySerial.print(Serial.readStringUntil('\n'));
}
