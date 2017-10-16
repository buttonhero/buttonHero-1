#include <ShiftedLCD.h>
#include <SPI.h>

//LiquidCrystal lcd(8);
const int latch = 12;
const int data = 11;
const int clck = 10;
//int ledArray[8] = {128,64,32,16,8,4,2,1};
int ledArray[5] = {1,2,4,8,16};
int ledArray2[5] = {1,2,4,8,16};
int ledArray3[5] = {1,2,4,8,16};
int ledArray4[5] = {1,2,4,8,16};
int ledArray5[5] = {1,2,4,8,16};
//int delayArray[8] = {800,500,100,300,200,1000,2000,888};
//int timer = 0;
//int score = 0;

void setup() {
 // lcd.begin(16,2);
 // lcd.print("Score: ");
 // lcd.setCursor(0,1);
  pinMode(latch,OUTPUT);
  pinMode(clck, OUTPUT);
  pinMode(data, OUTPUT);  
}

void loop() {
  for(int i = 0; i < 5; i++){
  //  lcd.print("Score: " + score);
    digitalWrite(latch,LOW);
    shiftOut(data, clck, MSBFIRST, ledArray[i]);
    digitalWrite(latch,HIGH);
    delay(300);
    digitalWrite(latch,LOW);
    shiftOut(data, clck, MSBFIRST, ledArray2[i]);
    digitalWrite(latch,HIGH);
    delay(300);
    digitalWrite(latch,LOW);
    shiftOut(data, clck, MSBFIRST, ledArray3[i]);
    digitalWrite(latch,HIGH);
    delay(300);
    digitalWrite(latch,LOW);
    shiftOut(data, clck, MSBFIRST, ledArray4[i]);
    digitalWrite(latch,HIGH);
    delay(300);
    digitalWrite(latch,LOW);
    shiftOut(data, clck, MSBFIRST, ledArray5[i]);
    digitalWrite(latch,HIGH);
    delay(300);
  }
 // timer = 0;

 
}


