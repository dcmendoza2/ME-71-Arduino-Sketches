// Change this value depending on where you put your LED pins
#define LED 11
#define POT A0
int val = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(POT);
  digitalWrite(LED, HIGH);
  int half_delay = map(val, 1023, 0, 2000,500);
  delay(half_delay);
  digitalWrite(LED, LOW);
  delay(half_delay);
  Serial.print(half_delay);
  Serial.print(" ");
  Serial.println(val);
  
}
