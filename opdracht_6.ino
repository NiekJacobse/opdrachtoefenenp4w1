// C++ code
//

  const int ledRedPin = 13;
  const int ledBluePin = 12;
  const int ledGreenPin = 11;


void setup()
{
 pinMode(ledRedPin, OUTPUT);
 pinMode(ledBluePin, OUTPUT);
 pinMode(ledGreenPin, OUTPUT);


}

void loop()
{
  for(int x = 0; x <= 255; x = x + 5) {
  for(int y = 0; y <= 255; y = y + 5) {
  for(int z = 0; z <= 255; z = z + 5) {
      // code to be executed for each possible (x,y,z) value
      // for example:
      analogWrite(ledRedPin, x);
      analogWrite(ledBluePin, y);
      analogWrite(ledGreenPin, z);
    }
  }
}
  
  

}