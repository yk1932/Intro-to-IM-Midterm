//INPUTS
#include<Servo.h>
int button = 11;
int reset_button = 10;

//OUTPUTS
int buzzer = 9;
int led1 = 12;
int led2 = 2;
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;
int count = 0;
Servo myServo; //create servo object to control a servo

//VALUES

int total_time = 700; // pick a random number between 1 to 15
int servo_position = 0; //variable to store servo position

void setup() {
  Serial.begin(9600); //initialize serial communications at 9600 bps

  myServo.attach(13); // attaches the servo on pin 11 to the servo object

  pinMode(button, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

//int random_number = random(1,15);

void loop() {
  // put your main code here, to run repeatedly:

  int button_state = digitalRead(button);

  if (button_state == 1) {
    count = count + 1;

    digitalWrite(led1, HIGH);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(led2, HIGH);
    digitalWrite(led3, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
    digitalWrite(led8, HIGH);

    Serial.println(total_time);
    Serial.println(count);

    //do
    //delay(500);

    if (total_time == count) {
      Serial.println("hello");

      //servo moves

      for (servo_position = 0; servo_position <= 180; servo_position += 20) { // goes from 0 degrees to 180 degrees
        // in steps of 1 degree
        myServo.write(servo_position);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
      }
      for (servo_position = 180; servo_position >= 0; servo_position -= 20) { // goes from 180 degrees to 0 degrees
        myServo.write(servo_position);              // tell servo to go to position in variable 'pos'
        delay(15);                       // waits 15ms for the servo to reach the position
      }


      //tone sound

      //sol
      tone(buzzer, 392);
      delay(300);

      //mi
      tone(buzzer, 330);
      delay(300);

      //do
      tone(buzzer, 262);
      delay(300);

      noTone(buzzer);
    }
  }
  else {
    digitalWrite(led1, LOW);   // turn the LED on (HIGH is the voltage level)
    digitalWrite(led2, LOW);
    digitalWrite(led3, LOW);
    digitalWrite(led4, LOW);
    digitalWrite(led5, LOW);
    digitalWrite(led6, LOW);
    digitalWrite(led7, LOW);
    digitalWrite(led8, LOW);
  }

  //reset game
  int reset_state = digitalRead(reset_button);

  if (reset_state == 1) {

    count = 0;

    //do
    tone(buzzer, 262);
    delay(300);

    //mi
    tone(buzzer, 330);
    delay(300);

    //sol
    tone(buzzer, 392);
    delay(300);

    noTone(buzzer);


  }
}
