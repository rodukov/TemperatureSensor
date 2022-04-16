#ifndef INDICATOR_FH
#define INDICATOR_FH
#include <Arduino.h>

/* ================ INDICATOR VARIABLES ================ */
#define red 9
#define green 10
#define blue 11
#define basic_delay 10

/* ================ INDICATOR FUNCTIONS ================ */
void setup_indicator();
void increase(short int PortNumber);
void decrease(short int PortNumber);


#endif
