#include <Servo.h>
volatile string es;
Servo mm;

void setup() {
  es=0;
  Serial.begin(7789);
  mm.attach(5);
}

void loop() {
  // put your main code here, to run repeatedly:
  //if serial signal is greater than zero. means we are receiving signal then catch the word right or left and do as asked
  if(Serial.available()>0){
    es= Serial.read();
    if (es == "Left"){
      mm.write(0);
      delay(100);
    }
    if( es == "Right"){
      mm.write(180);
      delay(100);
    }
      
    }
   
}