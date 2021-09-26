// Change this value depending on where you put your LED pins
#define LED 13
// Change this value to change delay time/frequency of blinking
#define DELAY 200
void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED, HIGH);
  delay(DELAY);
  digitalWrite(LED, LOW);
  delay(DELAY);
}
