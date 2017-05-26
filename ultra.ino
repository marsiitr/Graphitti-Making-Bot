void ultra_setup()
{
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

}
void read_ultra()
{
  digitalWrite(trig, LOW);
  delay(2);
  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  t = pulseIn(echo, HIGH, 10000);
  //moving average
  values_storage[moving_avg_const] = t / 58.5; //conversion into cm
  moving_avg_const++;
  moving_avg_const %= 10;
  for (int i = 0; i < 10; i++)
  {
    sum += values_storage[i];
  }
  val_ultra = sum / 10;
  sum = 0;
}
void display_value_ultra()
{
  Serial.print("ultra_val = ");
  Serial.println(val_ultra);
}



