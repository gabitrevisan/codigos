// Projeto-desafio realizado para a disciplina de Edge Computing & Computer Systems (faculdade). Link de acesso no TinkerCad: https://www.tinkercad.com/things/0X7lY2UW6UJ-desafio-aula-04-edge-computing-and-computer-systems/editel?returnTo=%2Fthings%2F0X7lY2UW6UJ-desafio-aula-04-edge-computing-and-computer-systems&sharecode=sEP0OPCYH_uiggehn5bFn5BYVeWDpPfQfEWvLVTRqKI

int inches = 0;
int cm = 0;
int ledPin1 = 13;
int ledPin2 = 12;
int ledPin3 = 11;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop()
{
  
  cm = 0.01723 * readUltrasonicDistance(7, 7);
  inches = (cm / 2.54);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100);
 if (cm <= 70){
   digitalWrite (ledPin1, HIGH);
   digitalWrite (ledPin2, LOW);
   digitalWrite (ledPin3, LOW);
 }
 if (cm > 70) {
   digitalWrite (ledPin2, HIGH);
   digitalWrite (ledPin1, LOW);
   digitalWrite (ledPin3, LOW);
 }
  if (cm >= 101){
   digitalWrite (ledPin3, HIGH);
   digitalWrite (ledPin2, LOW);
   digitalWrite (ledPin1, LOW);
  }
}