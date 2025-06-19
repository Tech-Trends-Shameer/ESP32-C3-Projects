#define SOIL_MOISTURE_PIN 1  // Adjust based on your wiring

void setup() {
  Serial.begin(9600);
}

void loop() {
  int value = analogRead(SOIL_MOISTURE_PIN);
  Serial.print("Soil Moisture Raw: ");
  Serial.println(value);
  delay(1000);
}
