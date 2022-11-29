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
int schwarz;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
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

void steering_value(){
  if(S0R >= schwarz) {steering = steering - 1;}
  if(S1R >= schwarz) {steering = steering - 1;}
  if(S2R >= schwarz) {steering = steering - 1;}
  if(S3R >= schwarz) {steering = steering - 1;}
  if(S4R >= schwarz) {steering = steering - 1;}
  if(S5R >= schwarz) {steering = steering - 1;}

  if(S2L >= schwarz) {steering = steering + 1;}
  if(S3L >= schwarz) {steering = steering + 1;}
  if(S4L >= schwarz) {steering = steering + 1;}
  if(S5L >= schwarz) {steering = steering + 1;}
  if(S6L >= schwarz) {steering = steering + 1;}
  if(S7L >= schwarz) {steering = steering + 1;}
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