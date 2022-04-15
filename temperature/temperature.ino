#include <stDHT.h> /* To use this library, import it from the libs/stDHT.zip folder */
#define TemperatureSensorPort 2
#define RequestDelay 225.55
#define SerialBod 57600

DHT sens(DHT11); /* If you are using another sensor write it here */

void print_temperature(short int t, short int h){
  const char *SerialMessages[5] = { "Temperature: ", "℃", "Humidity: ", "%", "[  TemperatureSensor  ] -> " };
  Serial.print(SerialMessages[4]); Serial.print(SerialMessages[0]); Serial.print(t); Serial.println(SerialMessages[1]);
  Serial.print(SerialMessages[4]); Serial.print(SerialMessages[2]); Serial.print(h); Serial.println(SerialMessages[3]);
}

void setup(){
  Serial.begin(SerialBod);
  pinMode(TemperatureSensorPort, INPUT);
  digitalWrite(TemperatureSensorPort, HIGH);
}
void loop() {
  print_temperature(sens.readTemperature(TemperatureSensorPort), sens.readHumidity(TemperatureSensorPort));
  delay(RequestDelay);
  
}
