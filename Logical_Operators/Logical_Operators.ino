// LOGICAL OPERATORS EXCERCISE! 

const int analogPin = 4;
int serialState = 0;
const int buttonPin = 8;
int buttonState = 0;
const int ledPin = 5;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  serialState = analogRead(analogPin);
  Serial.println(serialState);
  buttonState = digitalRead(buttonPin);

  if ((serialState > 200) && (serialState < 400) && (buttonState == HIGH)) {
    digitalWrite(5, HIGH);
  }
  else {
    digitalWrite(5, LOW);
  }

}









