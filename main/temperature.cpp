#include <stDHT.h> /* To use this library, import it from the libs/stDHT.zip folder */
#define TemperatureSensorPort 2
#define RequestDelay 225.55
#define SerialBod 57600

DHT sens(DHT11); /* If you are using another sensor write it here */
const char *SerialMessages[5] = { "Temperature: ", "℃", "Humidity: ", "%", "[  TemperatureSensor  ] -> " };
void VariableArgs(int first,...)
{
   int* pFirst = &first;
   Serial.print(pFirst[1]);
}

void print_temperature(short int t) {
  Serial.print(SerialMessages[4]); Serial.print(SerialMessages[0]); Serial.print(t); Serial.println(SerialMessages[1]);
}

void print_humidity(short int h) {
  Serial.print(SerialMessages[4]); Serial.print(SerialMessages[2]); Serial.print(h); Serial.println(SerialMessages[3]);
}

void setup_temperature() {
  Serial.begin(SerialBod);
  pinMode(TemperatureSensorPort, INPUT);
  digitalWrite(TemperatureSensorPort, HIGH);
}

short int get_temperature() {
  short int t = sens.readTemperature(TemperatureSensorPort);
  print_temperature(t);
  return t;
}

short int get_humidity() { 
  short int h = sens.readHumidity(TemperatureSensorPort);
  print_humidity(h);
  return h;
}


void loop_temperature() {
  short int t = get_temperature();
  short int h = get_humidity();
  print_temperature(t);
  print_humidity(h);
  // delay(RequestDelay);
}
