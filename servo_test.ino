#include <Servo.h>
Servo myservo;
const int TRIGGER = 2;
int switch_dir = 0;
int pos = 0;
int buttonState = 0;
void setup() {
    myservo.attach(9);
    pinMode(TRIGGER,INPUT);
}
void loop() {
    buttonState = digitalRead(TRIGGER);
    if (buttonState == LOW){
        delay(500);
        if(digitalRead(TRIGGER) == HIGH){
            switch_dir = !switch_dir;
            if (switch_dir){
                myservo.write(0);
            }
            else{
               myservo.write(200);
               delay(3000);
            }
        }
    }
    delay(30);
}

