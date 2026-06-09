int sensorPin = A0; 

void setup() {
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(sensorPin);
  Serial.print("Nilai Gas: ");
  Serial.println(sensorValue);
  delay(1000);
}