#include <SoftwareSerial.h>
#include <rgb_lcd.h>
#include <Wire.h>
rgb_lcd lcd;
const int colorR = 255;
const int colorG = 0;
const int colorB = 0;

SoftwareSerial mySerial(5,6); //rx , tx pins

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  mySerial.begin(9600);

    // set up the LCD's number of columns and rows:
    lcd.begin(16, 2);
    
    lcd.setRGB(colorR, colorG, colorB);
    
    // Print a message to the LCD.
    

    delay(1000);
}

void loop() {
  // put your main code here, to run repeatedly:


if (mySerial.available() > 0){
  String recievedMessage = mySerial.readString();
  lcd.print(recievedMessage);
  delay(2000);
 }
 
}
