// Firmware.ino

void setup() {
  // Initialize the built-in LED pin as an output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_BUILTIN, HIGH);  // Turn the LED on
  delay(100);                       // Wait for 100 milliseconds
  
  digitalWrite(LED_BUILTIN, LOW);   // Turn the LED off
  delay(100);                       // Wait for 100 milliseconds
}