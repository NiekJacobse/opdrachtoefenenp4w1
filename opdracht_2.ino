// C++ code
//
void setup(){

  for (int pinNumber = 6; pinNumber > 5 && pinNumber < 14; pinNumber++) {
    pinMode(pinNumber, OUTPUT);
  }
}

void loop()
{
  //the array of pins
int pins[] = {6, 7, 8, 9, 10, 11, 12, 13}; 
// loop to go from pin 6 to pin 13 with the lights
for (int i = 0; i < 8 && i >=0; i++) {
  digitalWrite(pins[i], HIGH); 
  delay(100);
  digitalWrite(pins[i], LOW);
}
// loop to go from pin 13 to pin 6 
for (int i = 7; i < 8 && i >= 0; i--) {
  digitalWrite(pins[i], HIGH); 
  delay(100);
  digitalWrite(pins[i], LOW);
}

}