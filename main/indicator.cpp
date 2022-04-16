#include "indicator.h"

void setup_indicator() {
  /* Pin layout on the Arduino UNO board */
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void increase(short int PortNumber) {
  for(short int c = 0; c <= 250; c++){ analogWrite(PortNumber, c); c++; delay(basic_delay); }
}

void decrease(short int PortNumber) {
  for(short int c = 250; c >= 0; c--){ analogWrite(PortNumber, c); c--; delay(basic_delay); }
}

  /* Increasing loop 
  for(int c = 0; c <= 250; c++){ analogWrite(blue, c); c++; delay(basic_delay); } */
  /* Decreasing loop 
  for(int c = 250; c >= 0; c--){ analogWrite(blue, c); c--; delay(basic_delay); } */
