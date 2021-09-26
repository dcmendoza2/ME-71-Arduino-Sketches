#define LED 11
#define INTERRUPT 2
volatile byte state = LOW;

void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);
  pinMode(INTERRUPT, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(INTERRUPT), blink, RISING);
}

void loop() {
  Serial.println(state);
  digitalWrite(LED, state);
  delay(100);
}

void blink() {
  state = !state;
}
