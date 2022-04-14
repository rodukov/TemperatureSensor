#define red 9
#define green 10
#define blue 11
#define basic_delay 10

void setup() {
  /* Pin layout on the Arduino UNO board */
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);

}

void loop() {
  /* Increasing loop */
  for(int c = 0; c <= 250; c++){ analogWrite(green, c); c++; delay(basic_delay); }
  /* Decreasing loop */
  for(int c = 250; c >= 0; c--){ analogWrite(green, c); c--; delay(basic_delay); }

}
