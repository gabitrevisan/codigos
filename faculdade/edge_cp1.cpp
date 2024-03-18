// Projeto realizado para a prova 01 da disciplina de Edge Computing & Computer Systems (faculdade). Link de acesso no TinkerCad: https://www.tinkercad.com/things/9mdE36f97O8-checkpoint-01-edge-computing-and-computer-systems/editel?returnTo=%2Fthings%2F9mdE36f97O8-checkpoint-01-edge-computing-and-computer-systems&sharecode=cCM8lWGshlFS5gr9I6vjlkI9pLPyObTUy3hf-lmgUUA

const int ledPin1 = 13; //LED verde = ok
const int ledPin2 = 12; //LED amarelo = alerta
const int ledPin3 = 11; //LED vermelho = problema
const int buzzer = 10;
const int ldrPin = A0;
int sensorValue  = 0;
int transitionValue = 0;

void setup() {
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(ldrPin, INPUT);
}

void loop() {

  int ldrStatus = analogRead(ldrPin);
  if (ldrStatus <= 370) {
    digitalWrite(ledPin1, HIGH);
    digitalWrite(ledPin2, LOW);
    digitalWrite(ledPin3, LOW);
    digitalWrite(buzzer, LOW);
	}
  if (ldrStatus >= 370 && ldrStatus <=590) {
    digitalWrite(ledPin1, LOW);
    digitalWrite(ledPin2, HIGH);
    digitalWrite(ledPin3, LOW);
    digitalWrite(buzzer, HIGH);
    delay (3000);
    noTone(buzzer);
    delay (1500);
  	}
  if (ldrStatus > 590){
    digitalWrite(ledPin1,LOW);
  	digitalWrite(ledPin2,LOW);
    digitalWrite(ledPin3,HIGH);
    digitalWrite(buzzer, LOW);
  }
}