//ESC_caliberate
//Visit www.rootsaid.com for full tutorial

#include <SoftwareSerial.h>
#include<Servo.h>          

Servo esc; 

void setup()
{
esc.attach(10);
Serial.begin(9600);

esc.write(170);
delay(2000);
esc.write(90);
delay(2000);
esc.write(140);
delay(2000);
esc.write(90);
delay(2000);
}

