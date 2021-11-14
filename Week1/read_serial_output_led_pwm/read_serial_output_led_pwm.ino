// Change this value depending on where you put your LED pins
#define LED 11
#define POT A0
#define DELAY 100

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int input = analogRead(POT);
  int output = map(input, 0, 1023, 0 , 255);
  analogWrite(LED, output);
  Serial.print("sensor = ");
  Serial.print(input);
  Serial.print("\t output = ");
  Serial.println(output);
  delay(DELAY);
}
