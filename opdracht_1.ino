// C++ code
//
  	int ledPin = 0;
	const int potPin = A5;
	int potRead = 0;
	int ledAantal = 0;
	int mappedpotRead = 0;

void setup()
{
  for (int ledPin = 0; ledPin < 7; ledPin++){
    pinMode(ledPin, OUTPUT);
  }
  pinMode(potPin, INPUT);
 
}

void loop()
{

potRead = analogRead(potPin); 
  mappedpotRead = map(potRead, 0, 1023, 0, 7);
    
    for (int ledAantal = 0; ledAantal < 7; ledAantal++ ){
  ledPin = ledAantal;
      if (ledPin < mappedpotRead ){
  digitalWrite(ledPin, HIGH);
      }
      else {
        digitalWrite(ledPin, LOW);}
}
}