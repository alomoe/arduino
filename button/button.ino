#define pin3 3
#define pin4 4
#define pin5 5
#define pin6 6

int val1 = 0;
int val2 = 0;
int val3 = 0;  
int val4 = 0; 
int val5 = 0; 
int val6 = 0;
 
void setup() {
  Serial.begin(9600);
  pinMode(pin3, INPUT);
  pinMode(pin4, INPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);

}
void loop()
{
  digitalWrite(pin6, LOW);
  digitalWrite(pin5, HIGH);
  int buttonState = digitalRead(pin3);
  delay(1);
  int buttonState1 = digitalRead(pin4);
  delay(1);    
  digitalWrite(pin6, HIGH);
  digitalWrite(pin5, LOW);
  int buttonState2 = digitalRead(pin3);
  delay(1);
  int buttonState3 = digitalRead(pin4);
  delay(1);
  if (buttonState==0){
    val1=0;
  }
  if (buttonState1==0){
    val2=0;
  }
  if (buttonState2==0){
    val3=0;
  }
  if (buttonState3==0){
    val4=0;
  }
  if (buttonState==0 || buttonState1==0){
    val5=0;
  }
  if (buttonState2==0 || buttonState3==0){
    val6=0;
  }
  if (buttonState3==1 && buttonState2==1 && val6!=6){
    Serial.println("3 & 4");
    val6 = 6;
    val3 = 3;
    val4 = 4;
  }
  else if (buttonState==1 && buttonState1==1 && val5!=5){
    Serial.println("1 & 2");
    val5=5;
    val1 = 1;
    val2 = 2;
  }
  else if (buttonState==1 && val1!=1){
    Serial.println("1");
    val1 = 1;
  }
  else if (buttonState1==1 && val2!=2){
    Serial.println("2");
    val2 = 2;
  }
  else if (buttonState2==1 && val3!=3){
    Serial.println("3");
    val3 = 3;
  }
  else if (buttonState3==1 && val4!=4){
    Serial.println("4");
    val4 = 4;
  }
}
