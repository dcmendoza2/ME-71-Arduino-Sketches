// Change this value to change delay time/frequency of reading input
#define DELAY 200

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue * 5.0/1024.0);
  delay(DELAY);        // delay in between reads for stability
}
