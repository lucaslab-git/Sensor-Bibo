#include <Arduino.h>
//-----Sensor-Bibo-----//

#define S0RP A0
#define S1RP A1
#define S2RP A2
#define S3RP A3
#define S4RP A4
#define S5RP A5
#define S6RP A6
#define S7RP A7

#define S0LP A8
#define S1LP A9
#define S2LP A10
#define S3LP A11
#define S4LP A12
#define S5LP A13
#define S6LP A14
#define S7LP A15

int S0R =  0;
int S1R =  0;
int S2R =  0;
int S3R =  0;
int S4R =  0;
int S5R =  0;
int S6R =  0;
int S7R =  0;

int S0L =  0;
int S1L =  0;
int S2L =  0;
int S3L =  0;
int S4L =  0;
int S5L =  0;
int S6L =  0;
int S7L =  0;

int steering = 0;
int schwarz = 0;

void setup() {
  Serial.begin(9600);
  delay(1000);
  S0L = analogRead(S0LP);
  schwarz = S0L - 2;
  Serial.println(schwarz);
  delay(500);
}

int steering_value(){

  get_value();

  if(S0R >= schwarz) {steering = 6;}
  else if(S1R >= schwarz) {steering = 5;}
  else if(S2R >= schwarz) {steering = 4;}
  else if(S3R >= schwarz) {steering = 3;}
  else if(S4R >= schwarz) {steering = 2;}
  else if(S5R >= schwarz) {steering = 1;}

  else if(S7L >= schwarz) {steering = -6;}
  else if(S6L >= schwarz) {steering = -5;}
  else if(S5L >= schwarz) {steering = -4;}
  else if(S4L >= schwarz) {steering = -3;}
  else if(S3L >= schwarz) {steering = -2;}
  else if(S2L >= schwarz) {steering = -1;}
  else {steering = 0;}
  
  return steering;
}

void Green_left(){
  //Code-Abfrgage, True oder False output
}

void Green_right(){
  //Code-Abfrgage, True oder False output
}

void Obstacle(){
  //Code-Abfrgage, True oder False output
}

void get_value() {
  S0R = analogRead(S0RP);
  S1R = analogRead(S1RP);
  S2R = analogRead(S2RP);
  S3R = analogRead(S3RP);
  S4R = analogRead(S4RP);       
  S5R = analogRead(S5RP);
  S6R = analogRead(S6RP);
  S7R = analogRead(S7RP);

  S0L = analogRead(S0LP);
  S1L = analogRead(S1LP);
  S2L = analogRead(S2LP);
  S3L = analogRead(S3LP);
  S4L = analogRead(S4LP);       
  S5L = analogRead(S5LP);
  S6L = analogRead(S6LP);
  S7L = analogRead(S7LP);
}