// C++ code
//
void setup()
{
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop()
{
int pins[] = {6, 7, 8, 9, 10, 11, 12, 13}; // array of pins

for (int i = 0; i < 8 && i >=0; i++) {
  digitalWrite(pins[i], HIGH); // set pin to HIGH
  delay(1000);
  digitalWrite(pins[i], LOW); // set pin to LOW
}

for (int i = 7; i < 8 && i >= 0; i--) {
  digitalWrite(pins[i], HIGH); // set pin 
  delay(1000);
  digitalWrite(pins[i], LOW);
}

}

	