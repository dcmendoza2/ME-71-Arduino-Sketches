#include <OneWire.h>
#include <DallasTemperature.h>
#define ONE_WIRE_BUS 5

// SAMPLE NA BAGO
OneWire oneWire(ONE_WIRE_BUS);
DallasTemperature sensors(&oneWire);
void setup(void)
{
sensors.begin();
Serial.begin(9600);
}
void loop(void)
{
sensors.requestTemperatures();
float T = sensors.getTempCByIndex(0);
Serial.println(T);
delay(1000);
}
