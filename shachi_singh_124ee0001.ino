// C++ code
const int redLight = 4;
const int yellowLight = 3;
const int greenLight = 2;
const int pushSwitch = 7;
int buttonState = 0;

void setup() {
  pinMode(redLight, OUTPUT);
  pinMode(yellowLight, OUTPUT);
  pinMode(greenLight, OUTPUT);
  pinMode(pushSwitch, INPUT); 
}

void loop() {
  
  buttonState = digitalRead(pushSwitch); 
  if (buttonState == HIGH)
  {
    pedestrianCrossing();
  }else
  {
    normalCycle();
  }
}
  

void normalCycle() 
{
    digitalWrite(greenLight, HIGH);
    delay(3000);
    digitalWrite(greenLight, LOW);
  
    digitalWrite(yellowLight, HIGH);
    delay(3000);
    digitalWrite(yellowLight, LOW);
  
    digitalWrite(redLight, HIGH);
    delay(3000);
    digitalWrite(redLight, LOW);
}

void pedestrianCrossing() 
{
    digitalWrite(greenLight, LOW);
    digitalWrite(yellowLight, LOW);
    digitalWrite(redLight, HIGH);
    delay(5000); 
    digitalWrite(redLight, LOW);
}



