#include "indicator.h"
#include "temperature.h"

void setup() {
  setup_indicator();
  setup_temperature();
}

void loop() {

  short int t = get_temperature();
  short int h = get_humidity();
  if(h >= 65) {
    increase(blue);
    decrease(blue);    
  } else if (h <= 40 ) {
    increase(red);
    decrease(red);    
  } else {
    increase(green);
    decrease(green);       
  }

}
