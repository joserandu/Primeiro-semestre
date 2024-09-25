/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://www.arduino.cc/en/Tutorial/BuiltInExamples/Blink
*/

int led=13;
int led2=12;
int led3=11;
//int led4=7;
int led5=5;
int x;
int botao=7;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led, OUTPUT);  // led 13 // input/output
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  //pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(botao, INPUT);
}

// the loop function runs over and over again forever
void loop() {

  x = digitalRead(botao);

  if (x == HIGH) {
   
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(led2, LOW);
  //digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led3, LOW);// turn the LED off by making the voltage LOW
  delay(300);                       // wait for a second
  
  //digitalWrite(led4, HIGH);
  digitalWrite(led2, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led, LOW); // turn the LED on (HIGH is the voltage level)
  delay(300);                     
                       // wait for a second
  digitalWrite(led2, HIGH);
  digitalWrite(led, LOW);
  //digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led3, LOW);// turn the LED on (HIGH is the voltage level)
  delay(300);                       // wait for a second
  //digitalWrite(led2, LOW);    // turn the LED off by making the voltage LOW
  //delay(500);  

  digitalWrite(led5, HIGH);
  digitalWrite(led2, LOW);
  //digitalWrite(led4, LOW);
  digitalWrite(led3, LOW);
  digitalWrite(led, LOW); // turn the LED on (HIGH is the voltage level)
  delay(300);

  digitalWrite(led3, HIGH);
  digitalWrite(led2, LOW);
  //digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led, LOW); // turn the LED on (HIGH is the voltage level)
  delay(300);

  } else {
    digitalWrite(led3, LOW);
  digitalWrite(led2, LOW);
  //digitalWrite(led4, LOW);
  digitalWrite(led5, LOW);
  digitalWrite(led, LOW);
  }
}
