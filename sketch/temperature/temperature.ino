int sensorPin = A1; // Using A1 so it doesn't clash if you kept A0 for the MQ sensor

void setup() {
  Serial.begin(9600);
}

void loop() {
  // 1. Read the raw analog value (0 to 1023)
  int rawValue = analogRead(sensorPin);
  
  // 2. Convert the raw value to Voltage (assuming a standard 5V Arduino)
  float voltage = (rawValue / 1024.0) * 5.0;
  
  // 3. Convert Voltage to Celsius (10mV = 1 degree C)
  float tempC = voltage * 100.0;
  
  // Print the result to the Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(tempC);
  Serial.println(" °C");
  
  delay(5000); // Wait 1 second before the next reading
}