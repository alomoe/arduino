#define led_pin1 7
#define led_pin2 2
#define led_pin3 3
#define led_pin4 4
#define led_pin5 5
#define led_pin6 6
int var;

void setup() {
  Serial.begin(9600);
  pinMode(led_pin1, OUTPUT);
  pinMode(led_pin2, OUTPUT);
  pinMode(led_pin3, OUTPUT);
  pinMode(led_pin4, OUTPUT);
  pinMode(led_pin5, OUTPUT);
  pinMode(led_pin6, OUTPUT);
  Serial.println("Какие лампочки включить? Напишите номер лампочки или лампочек(в порядке возрастания без пробелов)");
}

void loop() {
  switch (var) {
          case 1236:
            digitalWrite(led_pin1, HIGH);
            digitalWrite(led_pin2, HIGH);
            digitalWrite(led_pin3, HIGH);
            digitalWrite(led_pin4, LOW);
            digitalWrite(led_pin5, HIGH);
            digitalWrite(led_pin6, LOW);
            delay(10);
            digitalWrite(led_pin1, LOW);
            digitalWrite(led_pin2, HIGH);
            digitalWrite(led_pin3, LOW);
            digitalWrite(led_pin4, LOW);
            digitalWrite(led_pin5, LOW);
            digitalWrite(led_pin6, HIGH);
            delay(10);
            break;
        case 17:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          delay(10);
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          delay(10);
          break;
  }
  if (Serial.available() > 0) {
      var = Serial.parseInt();
      switch (var) {
        case 1:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          break;
        case 2:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          break;
        case 3:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          break;
        case 4:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          break;
        case 5:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          break;
        case 6:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          break;
        case 7:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          break;
        case 8:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          break;
        case 12:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          break;
        case 23:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          break;
        case 17:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          delay(10);
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          delay(10);
        case 14:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          break;
        case 34:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          break;
        case 56:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          break;
        case 67:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          break;
        case 78:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          break;
        case 58:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          break;
        case 15:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, LOW);
          break;
        case 26:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, LOW);
          break;
        case 37:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, LOW);
          break;
        case 48:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, LOW);
          break;
        case 123:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          break;
        case 567:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          break;
        case 1234:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, HIGH);
          break;
        case 5678:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, HIGH);
          digitalWrite(led_pin6, LOW);
          break;
        case 1256:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, LOW);
          break;
        case 3478:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, LOW);
          break;
        case 12345678:
          digitalWrite(led_pin1, HIGH);
          digitalWrite(led_pin2, HIGH);
          digitalWrite(led_pin3, HIGH);
          digitalWrite(led_pin4, HIGH);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, LOW);
          break;
        case 1236:
          break;
        default:
          digitalWrite(led_pin1, LOW);
          digitalWrite(led_pin2, LOW);
          digitalWrite(led_pin3, LOW);
          digitalWrite(led_pin4, LOW);
          digitalWrite(led_pin5, LOW);
          digitalWrite(led_pin6, LOW);
          Serial.println("Невозможная комбинация");
    }
  }
}
