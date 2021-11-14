int ThermistorPin  = A5;
int Vo;
float R1 = 10000;
float logR2, R2, T;
float c1 = 1.009249522e-03, c2 = 2.378405444e-04, c3 = 2.019202697e-07;
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
// put your main code here, to run repeatedly:
Vo = analogRead(ThermistorPin);
R2 = R1 * ((1024.0 / (float)(Vo)) - 1.0);
logR2 = log(R2);
T = (1.0 / (c1 + c2 * logR2 + c3 * logR2 * logR2 * logR2));
T = T - 273.15;
Serial.println(T);
delay(1000);
}
