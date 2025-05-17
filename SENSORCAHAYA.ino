int ldrPin = A0;
int ledPin = 3;

void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int ldrValue = analogRead(ldrPin);
  Serial.println(ldrValue);

  if (ldrValue < 400) {
    digitalWrite(ledPin, LOW); 
    Serial.println("TERANG");
  } else {
    digitalWrite(ledPin, HIGH);  
    Serial.println("GELAP");
  }

  delay(100);
}
