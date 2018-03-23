#include <SoftwareSerial.h>
#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3;

SoftwareSerial voiceSerial(8, 7);


void setup()
{
  voiceSerial.begin(9600);
  voiceSerial.listen();
  myservo1.attach(9);
  myservo2.attach(10);
  myservo3.attach(11);
  myservo1.write(30);
  myservo2.write(150);
  myservo3.write(0);
}


char id, accuracy;

void loop()
{
  if (voiceSerial.available()) {
    id       = voiceSerial.read();
    accuracy = voiceSerial.read();
    switch (id) {
      case '0': // 바보야
        myservo1.attach(9);
        myservo2.attach(10);
        myservo3.attach(11);
        myservo1.write(0);
        myservo2.write(180);
        myservo3.write(0);
        delay(500);
        myservo1.detach();
        myservo2.detach();
        myservo3.detach();
        delay(3000);
        myservo1.attach(9);
        myservo2.attach(10);
        myservo3.attach(11);
        myservo1.write(30);
        myservo2.write(150);
        myservo3.write(0);
        delay(500);
        myservo1.detach();
        myservo2.detach();
        myservo3.detach();
        break;
      case '1': // 멍청아
        myservo1.attach(9);
        myservo2.attach(10);
        myservo3.attach(11);
        myservo1.write(0);
        myservo2.write(180);
        myservo3.write(0);
        delay(500);
        myservo1.detach();
        myservo2.detach();
        for (int i = 0; i < 4; i++) {
          myservo3.write(10);
          delay(500);
          myservo3.write(0);
          delay(500);
        }
        myservo1.attach(9);
        myservo2.attach(10);
        myservo3.attach(11);
        myservo1.write(30);
        myservo2.write(150);
        myservo3.write(0);
        delay(500);
        myservo1.detach();
        myservo2.detach();
        myservo3.detach();
        break;
      case '2': // 못생겼어
        myservo1.attach(9);
        myservo2.attach(10);
        myservo3.attach(11);
        myservo1.write(60);
        myservo2.write(120);
        myservo3.write(0);
        delay(1000);
        myservo1.detach();
        myservo2.detach();
        myservo3.detach();
        delay(3000);
        myservo1.attach(9);
        myservo2.attach(10);
        myservo3.attach(11);
        myservo1.write(30);
        myservo2.write(150);
        myservo3.write(0);
        delay(1000);
        myservo1.detach();
        myservo2.detach();
        myservo3.detach();
        break;
      case '3': //돼지야
        myservo1.attach(9);
        myservo2.attach(10);
        myservo3.attach(11);
        myservo1.write(60);
        myservo2.write(120);
        myservo3.write(0);
        delay(500);
        myservo1.detach();
        myservo2.detach();
        for (int i = 0; i < 4; i++) {
          myservo3.write(10);
          delay(500);
          myservo3.write(0);
          delay(500);
        }
        myservo1.attach(9);
        myservo2.attach(10);
        myservo3.attach(11);
        myservo1.write(30);
        myservo2.write(150);
        myservo3.write(0);
        delay(500);
        myservo1.detach();
        myservo2.detach();
        myservo3.detach();
        break;
      case '4': // 야근하자
        myservo1.attach(9);
        myservo2.attach(10);
        myservo3.attach(11);
        myservo1.write(70);
        myservo2.write(150);
        myservo3.write(20);
        delay(1000);
        myservo1.detach();
        myservo2.detach();
        myservo3.detach();
        delay(3000);
        myservo1.attach(9);
        myservo2.attach(10);
        myservo3.attach(11);
        myservo1.write(30);
        myservo2.write(150);
        myservo3.write(0);
        delay(1000);
        myservo1.detach();
        myservo2.detach();
        myservo3.detach();
        break;
    }
  }
}
