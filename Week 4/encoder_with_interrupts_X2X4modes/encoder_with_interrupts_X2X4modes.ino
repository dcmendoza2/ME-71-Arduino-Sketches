int button = 4;
int pinA = 2;
int pinB = 3;

volatile int counter;

void setup() {
  counter = 0;
  pinMode(pinA, INPUT);
  pinMode(pinB, INPUT);
  pinMode(button, INPUT_PULLUP);

  attachInterrupt(digitalPinToInterrupt(pinA), changeA, CHANGE);
  attachInterrupt(digitalPinToInterrupt(pinB), changeB, CHANGE);

  Serial.begin(115200);

  Serial.print("A");
  Serial.print('\t');
  Serial.print("B");
  Serial.print('\t');
  Serial.print("Dir");
  Serial.print('\t');
  Serial.print("Count");
  Serial.print('\t');
  Serial.println("Event");

  Serial.print(digitalRead(pinA));
  Serial.print('\t');
  Serial.print(digitalRead(pinB));
  Serial.print('\t');
  Serial.print('\t');
  Serial.println(counter);
}

void loop() {
  if(digitalRead(button)==0){
    counter=0;  
  }
}

void changeA(){

  Serial.print(digitalRead(pinA));
  Serial.print('\t');
  Serial.print(digitalRead(pinB));
  Serial.print('\t');


  if (digitalRead(pinA)^digitalRead(pinB)){
    counter++;
    Serial.print("CW"); 
  }
  else{
    counter--;
    Serial.print("CCW");
  }


  Serial.print('\t');
  Serial.print(counter);
  Serial.print('\t');
  Serial.println("changeA");

}

void changeB(){

  Serial.print(digitalRead(pinA));
  Serial.print('\t');
  Serial.print(digitalRead(pinB));
  Serial.print('\t');

  if (digitalRead(pinA)^digitalRead(pinB)){
    counter--;
    Serial.print("CCW");
  }
  else{
    counter++;
    Serial.print("CW");
  }


  Serial.print('\t');
  Serial.print(counter);
  Serial.print('\t');
  Serial.println("changeB");

}
