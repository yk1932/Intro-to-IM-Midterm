//INPUTS

int button = 10;

//OUTPUTS
int buzzer = 9;
int led1 = 1;
int led2 = 2; 
int led3 = 3;
int led4 = 4;
int led5 = 5;
int led6 = 6;
int led7 = 7;
int led8 = 8;


void setup() {
  Serial.begin(9600); //initialize serial communications at 9600 bps
  pinMode(button, INPUT);
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  button_state = digitalRead(button);
  Serial.println(button_state);

  if (button_state == LOW){
    
  }

}
