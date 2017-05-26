#include <Servo.h>
Servo myservo;
# define servopin 11
# define trig  A9
#define echo  A8
#define m2_dir1 7
#define m2_dir2 27
#define m1_dir1 28
#define m1_dir2 29
#define m2_pwm 5
#define m1_pwm 6
#define analogpin A7//pot pin  
double t = 0;
int moving_avg_const = 0;
double values_storage[10] = {0};
double sum = 0;
double val_ultra = 0;
double ref_ultra = 30.0;
int m1_spd = 60;
int m2_spd = 80;
int currentPos;
//int pot_value = 0;
int pot_init = 0;
int pos_i = 90 ;
int pos_f = 45 ;


void setup()
{
  Serial.begin(57600);
   pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

  myservo.attach(servopin);
   motor_setup();
   ultra_setup();
  pot_setup();
  read_ultra();
}
void loop(){  
 // angle();
// S();
// gap();
// A();
// gap();
 M();
 gap();
 A(); 
 gap();
//gap();
 R();
 gap();
 S();
mov_m1(0);
 mov_m2(0);
 
myservo.write(90);
delay(2000000);}
 




