#define PIN_TRIG 12
#define PIN_ECHO 11

#define MOTOR_PIN_L1 4
#define MOTOR_PIN_L2 5

#define MOTOR_PIN_R1 7
#define MOTOR_PIN_R2 6

const int irSensorPin = A0;
long duration, fdist;
float irSensorValue, ldist;

bool stop=false;
bool ford=false;
bool right=false;
bool left=false;

void setup() {
Serial.begin (9600);
pinMode(PIN_TRIG, OUTPUT);
pinMode(PIN_ECHO, INPUT);
pinMode(MOTOR_PIN_R1, OUTPUT);
pinMode(MOTOR_PIN_R2, OUTPUT);
pinMode(MOTOR_PIN_L1, OUTPUT);
pinMode(MOTOR_PIN_L2, OUTPUT);
}

void loop() {

digitalWrite(PIN_TRIG, LOW);
delayMicroseconds(5);
digitalWrite(PIN_TRIG, HIGH);
delayMicroseconds(10);
digitalWrite(PIN_TRIG, LOW);
duration = pulseIn(PIN_ECHO, HIGH);
fdist = duration * 0.034 / 2;
Serial.print("FDIST: ");
Serial.print(fdist);
Serial.println(" cm");


irSensorValue = analogRead(irSensorPin)*0.0048828125;  
ldist = 32*pow(irSensorValue,-1.10);
Serial.print("ldist: ");
Serial.print(ldist);
Serial.println(" cm");


if (right==true){
  if (fdist>=10 && ldist<25){
    ford=true;
    left=false;
    right=false;
    stop=false;
  }
  else{
    ford=false;
    left=false;
    right=true;
    stop=false;
  }
}
else if (left==true){
  if (ldist<25){
    ford=true;
    left=false;
    right=false;
    stop=false;
  }
  else{
    ford=false;
    left=true;
    right=false;
    stop=false;
  }
}
else if (fdist<15){
  ford=false;
  left=false;
  right=true;
  stop=false;
}
else if(ldist>=20){
  ford=false;
  left=true;
  right=false;
  stop=false;
}
else if(fdist>=15 && ldist<20){
  ford=true;
  left=false;
  right=false;
  stop=false;
}
else{
  stop=true;
  left=false;
  right=false;
  stop=false;
}

if(ford){
  Serial.println("ford");
  digitalWrite(MOTOR_PIN_L1, 0);
  analogWrite(MOTOR_PIN_L2, 200);
  digitalWrite(MOTOR_PIN_R1, 0);
  analogWrite(MOTOR_PIN_R2, 250);
  delay(100); 
}
if(right){
  Serial.println("right");
  digitalWrite(MOTOR_PIN_L1, 0);
  analogWrite(MOTOR_PIN_L2, 0);
  digitalWrite(MOTOR_PIN_R1, 0);
  analogWrite(MOTOR_PIN_R2, 0); 
  delay(100);
  digitalWrite(MOTOR_PIN_L1, 0);
  analogWrite(MOTOR_PIN_L2, 200);
  digitalWrite(MOTOR_PIN_R1, 1);
  analogWrite(MOTOR_PIN_R2, 250);
}
if(left){
  Serial.println("left");
  digitalWrite(MOTOR_PIN_L1, 0);
  analogWrite(MOTOR_PIN_L2, 0);
  digitalWrite(MOTOR_PIN_R1, 0);
  analogWrite(MOTOR_PIN_R2, 0); 
  delay(100);
  digitalWrite(MOTOR_PIN_L1, 1);
  analogWrite(MOTOR_PIN_L2, 200);
  digitalWrite(MOTOR_PIN_R1, 0);
  analogWrite(MOTOR_PIN_R2, 250);
  delay(400);
  digitalWrite(MOTOR_PIN_L1, 0);
  analogWrite(MOTOR_PIN_L2, 200);
  digitalWrite(MOTOR_PIN_R1, 0);
  analogWrite(MOTOR_PIN_R2, 250);
  delay(100); 
}
if(stop){
  Serial.println("stop");
  digitalWrite(MOTOR_PIN_L1, 0);
  analogWrite(MOTOR_PIN_L2, 0);
  digitalWrite(MOTOR_PIN_R1, 0);
  analogWrite(MOTOR_PIN_R2, 0); 
  //delay(100);
}
delay(200);
}
