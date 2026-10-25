void setup() {
  Serial.begin(115200);
  Serial.println("Programa ESP32 inicialitzat!");
}

void loop() {
  Serial.println("Loop executat.");
  delay(2000);
}
