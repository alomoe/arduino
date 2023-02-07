#define led_pin3 3
#define led_pin4 4
#define led_pin5 5
#define led_pin6 6

void setup() {
  pinMode(led_pin3, OUTPUT);
  pinMode(led_pin4, OUTPUT);
  pinMode(led_pin5, OUTPUT);
  pinMode(led_pin6, OUTPUT);

}
void off(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, LOW);
  delay(500);
}
void first(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, LOW);
  delay(1000);
  off();
}
void second(){
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, LOW);
  delay(1000);
  off();
}
void third(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, HIGH);
  delay(1000);
  off();
}
void fourth(){
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, HIGH);
  delay(1000);
  off();
}
void fi_se(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, LOW);
  delay(1000);
  off();
}
void th_fo(){
  digitalWrite(led_pin3, LOW);
  digitalWrite(led_pin4, LOW);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, HIGH);
  delay(1000);
  off();
}
void fi_th(){
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, HIGH);
  digitalWrite(led_pin6, LOW);
  delay(1000);
  off();
}

void fi_fo(){
  digitalWrite(led_pin3, HIGH);
  digitalWrite(led_pin4, HIGH);
  digitalWrite(led_pin5, LOW);
  digitalWrite(led_pin6, HIGH);
  delay(1000);
  off();
}

void loop() {
  first();
  second();
  third();
  fourth();
  fi_se();
  th_fo();
  fi_th();
  se_fo();
  delay(1000);

  

}
