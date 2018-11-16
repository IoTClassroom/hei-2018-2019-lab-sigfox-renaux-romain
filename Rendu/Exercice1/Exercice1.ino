   int sensorPin = A0;
void setup() {
  // put your setup code here, to run once:
   pinMode(LED_BUILTIN, OUTPUT);
   Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(sensorPin);
  Serial.print("light: ");
  Serial.println(sensorValue);
  float percentage=map(sensorValue, 0, 1023, 0, 100);
  Serial.print("light percentage: ");
  Serial.print(percentage);
  Serial.println(" % ");
  delay(1000);
}
