// Define LED pin
const int ledPin = 13; // Use the built-in LED on most Arduino boards

void setup() {
  // Initialize the LED pin as an output
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Turn the LED on
  digitalWrite(ledPin, HIGH);
  // Wait for a second (1000 milliseconds)
  delay(1000);

  // Turn the LED off
  digitalWrite(ledPin, LOW);
  // Wait for a second
  delay(1000);
  delay(2000);
  delay(3000);
  delay(5000);
}
