int photoPin = A1;

void setup() {
  Serial.begin(115200);
}

void loop() {
  int light = analogRead(photoPin);
  Serial.println(light);
  delay(100);
}