
int ledAzulPin = 10;
int ledVermelho1Pin = 12;
int ledVermelho2Pin = 8;

void setup() {
  pinMode(ledAzulPin, OUTPUT);
  pinMode(ledVermelho1Pin, OUTPUT);
  pinMode(ledVermelho2Pin, OUTPUT);
}

void loop() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(ledAzulPin, HIGH);
    digitalWrite(ledVermelho1Pin, LOW);
    digitalWrite(ledVermelho2Pin, LOW);
    delay(100);
    digitalWrite(ledAzulPin, LOW);
    digitalWrite(ledVermelho1Pin, HIGH);
    digitalWrite(ledVermelho2Pin, HIGH);
    delay(100);
  }
  delay(1000); 
}


