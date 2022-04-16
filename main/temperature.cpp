#include <stDHT.h> /* To use this library, import it from the libs/stDHT.zip folder */
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define TemperatureSensorPort 2
#define RequestDelay 225.55
#define SerialBod 57600

/*
#if defined(ARDUINO) && ARDUINO >= 100
#define printByte(args)  write(args);
#else
#define printByte(args)  print(args,BYTE);
#endif
uint8_t heart[4] = {0xB0, 0xB0, 0xB0, 0xB0};*/

DHT sens(DHT11); /* If you are using another sensor write it here */
LiquidCrystal_I2C lcd(0x27, 16, 2);
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
  lcd.init();
  lcd.backlight();
  /*
  lcd.createChar(3, heart);*/

}

short int get_temperature() {
  short int t = sens.readTemperature(TemperatureSensorPort);
  print_temperature(t);
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temperature: "); lcd.print(t); /* lcd.printByte(3); */
  return t;
}

short int get_humidity() { 
  short int h = sens.readHumidity(TemperatureSensorPort);
  print_humidity(h);
  lcd.setCursor(0, 1);
  lcd.print("Humidity: "); lcd.print(h); lcd.print("%");
  return h;
}


void loop_temperature() {
  short int t = get_temperature();
  short int h = get_humidity();
  print_temperature(t);
  print_humidity(h);
  // delay(RequestDelay);
}
