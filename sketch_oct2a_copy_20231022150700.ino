int yellow = 13;
int green = 7;
int red = 4;
int white = 2;
void setup() {
  // put your setup code here, to run once:
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(white, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(yellow, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(red, LOW);
  digitalWrite(white, LOW);
  delay(500);
  digitalWrite(yellow, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(red, LOW);
  digitalWrite(white, LOW);
  delay(500);
  digitalWrite(yellow, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(red, HIGH);
  digitalWrite(white, LOW);
  delay(500);
  
  digitalWrite(green , LOW);
  digitalWrite(red ,HIGH);
  digitalWrite(white , HIGH);
  delay(500);
}
