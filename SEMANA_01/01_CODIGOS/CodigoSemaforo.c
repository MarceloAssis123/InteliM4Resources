int ledPinGreen = 11;
int ledPinYellow = 12;
int ledPinRed = 13;


void setup() {
  pinMode(ledPinGreen, OUTPUT);
  pinMode(ledPinYellow, OUTPUT);
  pinMode(ledPinRed, OUTPUT);
}

void loop() {
  digitalWrite(ledPinGreen, HIGH);
  digitalWrite(ledPinYellow, LOW);
  digitalWrite(ledPinRed, LOW);
  delay(5000);

  digitalWrite(ledPinGreen, LOW);
  digitalWrite(ledPinYellow, HIGH); 
  digitalWrite(ledPinRed, LOW);
  delay(700);

  digitalWrite(ledPinGreen, LOW);
  digitalWrite(ledPinYellow, LOW); 
  digitalWrite(ledPinRed, HIGH); 
  delay(3000);
}
