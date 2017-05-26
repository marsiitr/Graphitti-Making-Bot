void pot_setup()
{
  pinMode(analogpin, INPUT);
}
void pot_pos() 
{
  pot_init = analogRead(analogpin);
}




