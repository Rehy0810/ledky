#include <Arduino.h>
#include <Button.h>

int led[3] = {5,6,7};
int button[3] = {2,3,4};

void setup() {
  // put your setup code here, to run once:
  for(int i = 0; i < 3; i++){
    pinMode(led[i],OUTPUT);
  }
   for(int i = 0; i < 3; i++){
    pinMode(button[i],INPUT);
  }


}

void loop() {
for(int i = 0; i < 3; i++){
  if(digitalRead(button[i] == HIGH))
        digitalWrite(led[i], HIGH);
  else
        digitalWrite(led[i], LOW);
}
   
}