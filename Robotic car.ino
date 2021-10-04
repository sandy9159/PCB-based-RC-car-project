#include <Wire.h>
#include "rgb_lcd.h"
rgb_lcd lcd;
#include <L298N.h>
#include "BasicStepperDriver.h"
#define MOTOR_STEPS 200
#define RPM 1
#define DIR A0
#define STEP A1
#define MICROSTEPS 16
BasicStepperDriver stepper(MOTOR_STEPS, DIR, STEP);
const unsigned int IN1_A = 7;
const unsigned int IN2_A = 8;
const unsigned int IN1_B = 10;
const unsigned int IN2_B = 11;
const unsigned int EN = 9;
L298N motor1(EN, IN1_A, IN2_A);
L298N motor2(EN, IN1_B, IN2_B);
#define SW 4
int flag = 0;
int pin = 3; 
int pulse = 0;
int last = 0;
int current = 0;
int state = 0;
int state1 = 0;
int count = 0;
int x = 0;
int y = 0;
int z = 0;
int k = 0;
volatile long temp, counter, knob = 0; //This variable will increase or decrease depending on the rotation of encoder
int a = 0;
int b = 0;
int c = 0;
int d = 70;
void setup() {
  Serial.begin (9600);
  lcd.begin(16, 2);
  motor1.setSpeed(120);
  motor2.setSpeed(120);
  pinMode(12, OUTPUT);
  digitalWrite(12,HIGH);
  pinMode(SW, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP); // internal pullup input pin 2 
  pinMode(3, INPUT_PULLUP); // internalเป็น pullup input pin 3
  attachInterrupt(0, ai0, RISING);
  attachInterrupt(1, ai1, RISING);
  lcd.setCursor(0, 0);
  lcd.print ("  ROPE MACHINE  ");
  lcd.setCursor(0, 1);
  lcd.print (" PRESS TO START ");
  motor1.stop();
  motor2.stop();
  stepper.begin(RPM, MICROSTEPS);
  
  }
   
  void loop() {
if (!digitalRead(SW)){
   delay(50);
flag = 2;
lcd.clear();
lcd.setCursor(0, 0);
  lcd.print ("  ROPE MACHINE  ");
  lcd.setCursor(0, 1);
  lcd.print ("LENGTH = ");
  lcd.setCursor(13, 1);
  lcd.print ("MTR ");
}

    if (flag == 2){
      
 lcd.setCursor(9, 1);
  lcd.print (state);
  
  if (pulse != last){
    state ++;
    pulse = last;
    delay(10);
   }
//Serial.print(state1/100);
//Serial.print(" , ");
//Serial.println(state);

    }
if (state > 0 && !digitalRead(SW)){
  delay(50);

  flag = 3;
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print ("  ROPE MACHINE  ");
  lcd.setCursor(0, 1);
  lcd.print ("LENGTH = ");
  lcd.setCursor(13, 1);
  lcd.print ("MTR ");
  state1 = 0;
}

if (flag == 3){
  
  roation();
  stepper.rotate(c);
  digitalWrite(12,LOW);
  motor1.forward();
  motor2.forward();
  if (state1>100){
    state1=0;
    count++;
    lcd.clear();
    lcd.setCursor(0, 0);
  lcd.print ("  ROPE MACHINE  ");
  lcd.setCursor(0, 1);
  lcd.print ("LENGTH = ");
  lcd.setCursor(13, 1);
  lcd.print ("MTR ");
  }
 
lcd.setCursor(8, 1);
lcd.print (count);
lcd.setCursor(9, 1);
lcd.print (".");
lcd.setCursor(10, 1);
lcd.print (state1);
  
  if( counter != temp ){
  state1 ++;
  counter = temp;
  }

  if ( count == state){
    flag = 4;
    motor1.stop();
    motor2.stop();
    digitalWrite(12,HIGH);
 
  }
  
}
   
  
}

    
  
   
  void ai0() {
  
  counter++;
  }
   
  void ai1() {
    
  pulse ++;
  }

  void roation(){
  if ( a < 80 && b == 0){
    a++;
   c = 1;
  }

  if (a > 79 && b == 0){
    b = 1;
  }

  if (a < 0 && b == 1){
    b = 0;
  }

  

  if (b == 1){
    a--;
    c=-1;
  }
Serial.println(c);
}
