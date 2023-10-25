void setup() {
  Serial.begin(9600);
  pinMode(7, INPUT);
}

void loop() {
  int powered = digitalRead(7);
  if (powered == 1) {
    Serial.println("Hello World!");
  } else {
    Serial.println("Its 2023");
  }
}
