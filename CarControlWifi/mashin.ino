#define MOTOR_PIN_L1 4
#define MOTOR_PIN_L2 5

#define MOTOR_PIN_R1 7
#define MOTOR_PIN_R2 6
        

void setup() {
  pinMode(MOTOR_PIN_R1, OUTPUT);
  pinMode(MOTOR_PIN_R2, OUTPUT);
  pinMode(MOTOR_PIN_L1, OUTPUT);
  pinMode(MOTOR_PIN_L2, OUTPUT);
  Serial.begin(115200);
}

void loop()
{
  if (mySerial.available() > 0)
  {
    byte step = Serial.read();
    switch (step){
    	case 's':
    	  stop();
	  break;
    	case 'f':
    	  ford();
	  break;
	case 'b':
    	  back();
    	  break;
    	case 'r':
    	  right();
    	  break;
    	case 'l':
    	  left();
    	  break;
     }
  }
}

void stop()
{
  digitalWrite(MOTOR_PIN_L1, 0);
  analogWrite(MOTOR_PIN_L2, 0);
  digitalWrite(MOTOR_PIN_R1, 0);
  analogWrite(MOTOR_PIN_R2, 0); 
}

void ford()
{
  digitalWrite(MOTOR_PIN_L1, 1);
  analogWrite(MOTOR_PIN_L2, 250);
  digitalWrite(MOTOR_PIN_R1, 1);
  analogWrite(MOTOR_PIN_R2, 250);
}

void back()
{
  digitalWrite(MOTOR_PIN_L1, 0);
  analogWrite(MOTOR_PIN_L2, 250);
  digitalWrite(MOTOR_PIN_R1, 0);
  analogWrite(MOTOR_PIN_R2, 250);
}

void right()
{
  digitalWrite(MOTOR_PIN_L1, 1);
  analogWrite(MOTOR_PIN_L2, 250);
  digitalWrite(MOTOR_PIN_R1, 1);
  analogWrite(MOTOR_PIN_R2, 0);
}

void left()
{
  digitalWrite(MOTOR_PIN_L1, 1);
  analogWrite(MOTOR_PIN_L2, 0);
  digitalWrite(MOTOR_PIN_R1, 1);
  analogWrite(MOTOR_PIN_R2, 250);
}