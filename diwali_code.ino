
const int sensorPin = A0;
const int greenLED = 8;
const int yellowLED = 9;
const int redLED = 10;
const int buzzer = 6;

void setup() {
  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int pollution = analogRead(sensorPin);

  Serial.print("Pollution level: ");
  Serial.println(pollution);

  digitalWrite(greenLED, LOW);
  digitalWrite(yellowLED, LOW);
  digitalWrite(redLED, LOW);
  noTone(buzzer);

  if (pollution < 300) {
    digitalWrite(greenLED, HIGH);
    Serial.println("LOW: Air level indicator");
  }
  else if (pollution < 600) {
    digitalWrite(yellowLED, HIGH);
    Serial.println("WARNING: Pollution increasing");
  }
  else {
    digitalWrite(redLED, HIGH);
    tone(buzzer, 1000);
    Serial.println("DANGER: High pollution alert!");
  }

  delay(500);
}
