void motor_setup()
{
  pinMode(m1_dir1, OUTPUT);
  pinMode(m1_dir2, OUTPUT);
  pinMode(m1_pwm, OUTPUT);
  pinMode(m2_dir1, OUTPUT);
  pinMode(m2_dir2, OUTPUT);
  pinMode(m2_pwm, OUTPUT);
}
void mov_m1(int x)
{ 
  if (x > 0)
  { digitalWrite(m1_dir1, LOW);
    digitalWrite(m1_dir2, HIGH);
    analogWrite(m1_pwm, x);
  }
  else if (x < 0)
  { digitalWrite(m1_dir1, HIGH);
    digitalWrite(m1_dir2, LOW);
    analogWrite(m1_pwm, -x);
  }
  else
  { digitalWrite(m1_dir1, HIGH);
    digitalWrite(m1_dir2, HIGH);
  }
}
void mov_m2(int x)
{ 
  if (x > 0)
  { digitalWrite(m2_dir1, LOW);
    digitalWrite(m2_dir2, HIGH);
    analogWrite(m2_pwm, x);
  }
  else if (x < 0)
  { digitalWrite(m2_dir1, HIGH);
    digitalWrite(m2_dir2, LOW);
    analogWrite(m2_pwm, -x);
  }
  else
  { digitalWrite(m2_dir1, HIGH);
    digitalWrite(m2_dir2, HIGH);
  }
}

