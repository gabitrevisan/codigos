// Projeto-desafio realizado para a disciplina de Edge Computing & Computer Systems (faculdade). Link de acesso no TinkerCad: https://www.tinkercad.com/things/bChHPkvzv9H-desafio-02-do-dia-25042023-edge-computing-and-computer-systems/editel?returnTo=%2Fthings%2FbChHPkvzv9H-desafio-02-do-dia-25042023-edge-computing-and-computer-systems&sharecode=0f8PsOABzxHjjsP8Qz35SnpHTTG0grUnGL_5R5be2eY

#include <Servo.h>

const int ledPin1 = 12; //verde
const int presenca = 11; //sensor de presença
const int servoPin = 10; //servo motor

Servo servoMotor;

void setup(){
  Serial.begin(9600);
  pinMode(ledPin1, OUTPUT);
  pinMode(presenca, INPUT);
  pinMode(servoPin, OUTPUT);
  servoMotor.attach(servoPin);
}

void loop(){
  byte movimento = digitalRead(presenca);
  Serial.println(movimento);
  if(movimento){
	digitalWrite(ledPin1, HIGH);
    servoMotor.write(90);
    delay(1000);
  }
  else{
    digitalWrite(ledPin1, LOW);
    servoMotor.write(0);
  }
}