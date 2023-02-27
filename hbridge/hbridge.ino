#define motor_pin2 3
#define motor_pin1 2
int state=0;
int speed=0;
int side=0;
int var=0;

void setup() {
  Serial.begin(9600);
  pinMode(motor_pin1, OUTPUT);
  pinMode(motor_pin2, OUTPUT);
}

void loop() {
  if (var==0){
    if (state==0){
      Serial.println("Введите скорость:");
    }
    else{
      Serial.println("Введите сторону (1-против часовой, 2-по часовой ):");
    }
    var=1;
  }
  if (Serial.available() > 0) {
    if (state==0){
      speed = Serial.parseInt();
      state = 1;
    }
    else{
      side = Serial.parseInt();
      state = 0;
    }
    motor(speed, side);
    var=0;
  }
}

void motor(int vlc, int sd) {
  if(sd == 1){
    analogWrite(motor_pin2, 0);
    analogWrite(motor_pin1, vlc);
  }
  if(sd == 2){
    analogWrite(motor_pin1, 0);
    analogWrite(motor_pin2, vlc);
  }
}