int counter = 9;
void setup() {
  Serial.begin(9600);
  pinMode(8, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  Serial.println(counter);
  switch (counter) {
    case 9:
      digitalWrite(8, LOW); //a
      digitalWrite(2, LOW); //b
      digitalWrite(3, LOW); //c
      digitalWrite(4, HIGH); //d
      digitalWrite(5, HIGH); //e
      digitalWrite(6, LOW); //f
      digitalWrite(7, LOW); //g
      counter = counter - 1;
      break;
    case 8:
      digitalWrite(8, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      counter = counter - 1;
      break;
    case 7:
      digitalWrite(8, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      counter = counter - 1;
      break;
    case 6:
      digitalWrite(8, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      counter = counter - 1;
      break;
    case 5:
      digitalWrite(8, LOW);
      digitalWrite(2, HIGH);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      counter = counter - 1;
      break;
    case 4:
      digitalWrite(8, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, LOW);
      digitalWrite(7, LOW);
      counter = counter - 1;
      break;
    case 3:
      digitalWrite(8, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      counter = counter - 1;
      break;
    case 2:
      digitalWrite(8, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, HIGH);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, HIGH);
      digitalWrite(7, LOW);
      counter = counter - 1;
      break;
    case 1:
      digitalWrite(8, HIGH);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, HIGH);
      digitalWrite(5, HIGH);
      digitalWrite(6, HIGH);
      digitalWrite(7, HIGH);
      counter = counter - 1;
      break;
    case 0:
      digitalWrite(8, LOW);
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);
      digitalWrite(6, LOW);
      digitalWrite(7, HIGH);
      counter = 9;
      break;
  }
  delay(1500);
}