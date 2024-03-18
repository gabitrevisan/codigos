// Projeto realizado para a disciplina de Edge Computing & Computer Systems (faculdade). Link de acesso no TinkerCad: https://www.tinkercad.com/things/6MIA8EQKSlE-aula-03-edge-computing-and-computer-systems/editel?returnTo=%2Fthings%2F6MIA8EQKSlE-aula-03-edge-computing-and-computer-systems&sharecode=nnBuj941dyfwVAOBkzwHVksKxpOghj5y1DTzmIYmrCI

const int buttonPin = 2;
int buttonState = 0;
int ledPin1 = 13; //VERMELHO 01
int ledPin2 = 12; //AMARELO
int ledPin3 = 11; //VERDE 01
int ledPin4 = 9; //VERMELHO 02
int ledPin5 = 8; //VERDE 02

void setup()
{
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
pinMode(9, OUTPUT);
pinMode(8, OUTPUT);
pinMode(2, INPUT);
digitalWrite (2, HIGH);
}

void loop()
{
buttonState = digitalRead (2);
  if (buttonState == HIGH) {
  digitalWrite (13, HIGH);
  digitalWrite (12, LOW);
  digitalWrite (11, LOW);
  digitalWrite (9, LOW);
  digitalWrite (8, LOW);
  delay (777);
  digitalWrite (12, HIGH);
  digitalWrite (11, LOW);
  digitalWrite (13, LOW);
  digitalWrite (9, LOW);
  digitalWrite (8, LOW);
  delay (777);
  digitalWrite (11, HIGH);
  digitalWrite (12, LOW);
  digitalWrite (13, LOW);
  digitalWrite (9, LOW);
  digitalWrite (8, LOW);
  delay (777);
}
  else {
  digitalWrite (13, LOW);
  digitalWrite (12, LOW);
  digitalWrite (11, LOW);
  digitalWrite (9, HIGH);
  digitalWrite (8, LOW);
  delay (777);
  digitalWrite (12, LOW);
  digitalWrite (11, LOW);
  digitalWrite (13, LOW);
  digitalWrite (9, LOW);
  digitalWrite (8, HIGH);
  delay (777);
  }
}