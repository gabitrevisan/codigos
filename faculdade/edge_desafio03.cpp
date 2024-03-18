// Projeto-desafio realizado para a disciplina de Edge Computing & Computer Systems (faculdade). Link de acesso no TinkerCad: https://www.tinkercad.com/things/0ypCYst3NuH-desafio-01-do-dia-25042023-edge-computing-and-computer-systems/editel?returnTo=%2Fthings%2F0ypCYst3NuH-desafio-01-do-dia-25042023-edge-computing-and-computer-systems&sharecode=Zj55SFb0Dc_mQ88TB66kXkktF7LbnpOQCtwoZLzdXRs

const int buzzer = 13; //piezo
const int ledPin1 = 12; //verde
const int ledPin2 = 11; //vermelho
const int presenca = 10; //sensor de presença

void setup(){
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(presenca, INPUT);
}

void loop(){
  byte movimento = digitalRead(presenca);
  Serial.println(movimento);
  if(movimento){
        delay(333);
    	digitalWrite(ledPin1, LOW);
        digitalWrite(ledPin2, HIGH);
    	digitalWrite(buzzer, HIGH);
    	delay(333);
  }
  else{
    	digitalWrite(ledPin1, HIGH);
        digitalWrite(ledPin2, LOW);
    	digitalWrite(buzzer, LOW);
    	delay(333);
  }
}