#ifndef TEMPERATURE_FH
#define TEMPERATURE_FH
#include <Arduino.h>


/* ================ TEMPERATURE FUNCTIONS ================ */
void print_temperature(short int t);
void print_humidity(short int h);
void setup_temperature();
void loop_temperature();
void VariableArgs(int first,...);
short int get_temperature();
short int get_humidity();

#endif
