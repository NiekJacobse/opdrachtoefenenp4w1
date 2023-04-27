// C++ code
//
const int tempPin = A5;
int tempValue = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(tempPin, INPUT);
}

void loop()
{
  tempValue = map(analogRead(tempPin), 0, 1023, 0, 500);
  
  Serial.print("De Temperatuur is: ");
  Serial.println(tempValue);
  delay(250); 
}