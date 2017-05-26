void gap() 
{
  pot_pos();
  while (analogRead(analogpin) > pot_init - 13)
  {
    mov_m2(m2_spd);
  }
  mov_m2(0);
  delay(500);
}
void gap2() 
{
  pot_pos();
  while (analogRead(analogpin) > pot_init - 20)
  {
    mov_m2(m2_spd);
  }
  mov_m2(0);
  delay(500);
}


void M()
{
  read_ultra();
  while (val_ultra < 20)
  { //servo downlift
    myservo.write(pos_f);
    mov_m1(m1_spd);
       read_ultra();
    //Serial.println(val_ultra);
  }//myservo.write(pos_i);
  mov_m1(0);
  delay(500);

  pot_pos();
  while (analogRead(analogpin) > pot_init - 15)
  {//myservo.write(pos_f);
    mov_m2(m2_spd);
  }
  //myservo.write(pos_i);
  mov_m2(0);
  delay(500);

  while (val_ultra > 15)
  {//myservo.write(pos_f);
    mov_m1(-m1_spd);
    read_ultra();
  }myservo.write(pos_i);
  //servo uplift
mov_m1(0);
  delay(500);

  while (val_ultra < 20)
  {
    mov_m1(m1_spd);
    read_ultra();
    Serial.println(val_ultra);
  }
  mov_m1(0);
  delay(500);

  pot_pos();
  while (analogRead(analogpin) > pot_init - 15){
    myservo.write(pos_f);
   mov_m2(m2_spd);}
   //myservo.write(pos_i);
  mov_m2(0);
  delay(500);

  while (val_ultra > 10)
  {//myservo.write(pos_f);
    mov_m1(-m1_spd);
   read_ultra();
    //Serial.println(val_ultra);
  }myservo.write(pos_i);
  mov_m1(0);
}
void A() {
  
  while (val_ultra < 20)
  { //servo downlift
    myservo.write(pos_f);
    mov_m1(m1_spd);
    read_ultra();
    // Serial.println(val_ultra);

  }
  //myservo.write(pos_i);
 mov_m1(0);
  delay(500);

pot_init = analogRead(analogpin);
while (analogRead(analogpin) > pot_init - 20)
{myservo.write(pos_f);
  mov_m2(m2_spd);
}//myservo.write(pos_i);
mov_m2(0);
delay(500);

while (val_ultra > 16)
{myservo.write(pos_f);
  mov_m1(-m1_spd);
  read_ultra();
}//myservo.write(pos_i);
//servo uplift
mov_m1(0);
delay(500);
pot_init = analogRead(analogpin);
while (analogRead(analogpin) < pot_init + 52)
{//myservo.write(pos_f);
  mov_m2(-m2_spd);
}
myservo.write(pos_i);
mov_m2(0);
//servo uplift
delay(500);
pot_init = analogRead(analogpin);
while (analogRead(analogpin) > pot_init - 40)
{
  mov_m2(m2_spd);
}
mov_m2(0);
delay(500);
while (val_ultra > 10)
{myservo.write(pos_f);
  mov_m1(-m1_spd);
  read_ultra();
}myservo.write(pos_i);
//servo uplift
mov_m1(0);
}
void R() 
{
  while (val_ultra < 20)
  {myservo.write(pos_f);
    mov_m1(m1_spd);
    read_ultra();
  }
 // myservo.write(pos_i);
  //servo uplift
  mov_m1(0);
  delay(500);
  pot_pos();
  while (analogRead(analogpin) > pot_init - 30)
  {//myservo.write(pos_f);
    mov_m2(m2_spd);
  }//myservo.write(pos_i);
  mov_m2(0);
  delay(500);
  while (val_ultra > 16)
  {//myservo.write(pos_f);
    mov_m1(-m1_spd);
    read_ultra();
  }//myservo.write(pos_i);
  //servo uplift
  mov_m1(0);
  delay(500);
  pot_pos();
  while (analogRead(analogpin) < pot_init + 55)
  {//myservo.write(pos_f);
    mov_m2(-m2_spd);
  }myservo.write(pos_i);
  mov_m2(0);
  delay(500);
  //servo uplift
  pot_pos();
  while (analogRead(analogpin) > pot_init - 40)
  {
    mov_m2(m2_spd);
  }
  mov_m2(0);
  delay(500);
  while (val_ultra > 10)
  {myservo.write(pos_f);
    mov_m1(-m1_spd);
    read_ultra();
  }myservo.write(pos_i);
  //servo uplift
  mov_m1(0);
}
void S() 
{
  pot_pos();
  while (analogRead(analogpin) > pot_init - 20){
   myservo.write(pos_f);
    mov_m2(m2_spd);}
   // myservo.write(pos_i);
  mov_m2(0);
  delay(500);
  while (val_ultra < 15)
  {//myservo.write(pos_f);
    mov_m1(m1_spd);
    read_ultra();
  }//myservo.write(pos_i);
  //servo uplift
  mov_m1(0);
  delay(500);
  pot_pos();
  while (analogRead(analogpin) < pot_init + 42){
    //myservo.write(pos_f);
    mov_m2(-m2_spd);}
    //myservo.write(pos_i);
  mov_m2(0);
  delay(500);
  while (val_ultra < 20)
  {//myservo.write(pos_f);
    mov_m1(m1_spd);
    read_ultra();
  }//myservo.write(pos_i);
  //servo uplift
  mov_m1(0);
  delay(500);
  pot_pos();
  while (analogRead(analogpin) > pot_init - 50){
    //myservo.write(pos_f);
    mov_m2(m2_spd);}
    myservo.write(pos_i);
  mov_m2(0);
   delay(500);
  while (val_ultra > 10)
  {
    mov_m1(-m1_spd);
    read_ultra();
  }
  //servo uplift
  mov_m1(0);
}

void angle(){
  pot_pos();
  while((val_ultra < 35)&&(analogRead(analogpin))>pot_init -100){
    
    mov_m1(100);
    mov_m2(70);
    read_ultra();
  }
}

