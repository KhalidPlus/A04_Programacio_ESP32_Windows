void setup() {
  pinMode(2, OUTPUT);
}

void loop() {
  digitalWrite(2, HIGH); // Encén el LED
  delay(1000);           // Espera 1 segon
  digitalWrite(2, LOW);  // Apaga el LED
  delay(1000);           // Espera 1 segon
