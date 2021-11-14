float temp;
int reading;
#define LM35 A5
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  reading = analogRead(LM35);
  temp = 0.0 + 100.0*(5.0/1024.0)*(float)reading;
  Serial.print(reading);
  Serial.print('\t');
  Serial.println(temp);
  delay(100);
}
