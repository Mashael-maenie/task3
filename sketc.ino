#include <Servo.h>
volatile string es;
Servo mm;

void setup() {
  es=0;
  Serial.begin(7789);
  mm.attach(5);
}

void loop() {
  if(Serial.available()>0){
    es= Serial.read();
    if (es == 'Right')){
      mm.write(0);
      delay(100);
    }
    if( es == 'Left'){
      mm.write(180);
      delay(100);
    }
      
    }
   
}