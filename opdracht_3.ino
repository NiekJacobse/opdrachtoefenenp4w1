// C++ code
//
  const int switchPin = 11;
	const int ledPin = 3;
  	    int buttonState = 0;
	      int counter = 0;

void setup()
{
pinMode(ledPin, OUTPUT);
pinMode(switchPin, INPUT);
}

void loop(){
// "read" the switchPin and put it in the var buttonState  
buttonState = digitalRead(switchPin);
//if someone presses the button count goes up by 1  
  if (buttonState == HIGH){    
	count();
  }  
//if the count divided by 2 doesnt leave a rest LED = on.   
  if (counter % 2 == 0) {
	on();
}
// if the count divided by 2 does leave a rest LED = off  
  if (counter % 2 != 0){
	off();
  }
}

// function to up the count by 1
void count(){
      counter++;
    delay(250);
}
//function to set the LED to "on"  
void on(){
    digitalWrite(ledPin, HIGH);
}
// function to set the LED to "off"
void off(){
    digitalWrite(ledPin, LOW);
}
  