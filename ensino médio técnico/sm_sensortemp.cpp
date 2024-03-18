// Projeto realizado para a disciplina de Sistemas Microprocessados (ensino técnico). Link de acesso no TinkerCad: https://www.tinkercad.com/things/btTW4M3o9h4-sensor-de-temperatura-sm/editel?returnTo=%2Fthings%2FbtTW4M3o9h4-sensor-de-temperatura-sm&sharecode=9sW7z6CcH2h_SGNzZPMpccprDTS_ZIzx7Q00tVs23Qo

#include <LiquidCrystal.h>

#define pinTRIG 2
#define pinECHO 3

LiquidCrystal display(8, 9, 10, 11, 12, 13);
LiquidCrystal LCD(0,1,11,5,4,3,2);
int pulso;
float distancia;
int SensorTempPino=0;
int AlertaTempBaixa=8;
int AlertaTempAlta=13;
int TempBaixa=0;
int TempAlta=40;

void setup(){
  display.begin(16, 2);
  Serial.begin(9600);
  pinMode(pinTRIG, OUTPUT);
  pinMode(pinECHO, INPUT);
  digitalWrite(pinTRIG, 0);
  pinMode(AlertaTempBaixa, OUTPUT);
  pinMode(AlertaTempAlta, OUTPUT);
  LCD.setCursor(0,1);
  LCD.print("      C        F");
}

void loop(){
  digitalWrite(pinTRIG, 1);
  delayMicroseconds(10);
  digitalWrite(pinTRIG, 0);
  pulso = pulseIn(pinECHO, 1);
  distancia = pulso * 0.017221195;
  display.clear();
 display.setCursor( 0, 1);
  display.print("DIST.: ");
  display.print(distancia, 1);
  display.print(" cm.");
  delay(250);
  int SensorTempTensao=analogRead(A0);
  float Tensao=SensorTempTensao*5;
  Tensao/=1024;
  float TemperaturaC=(Tensao-0.5)*100;
  float TemperaturaF=(TemperaturaC*9/5)+32;
  LCD.setCursor(0,1);
  LCD.print(TemperaturaC);
  LCD.setCursor(9,1);
  LCD.print(TemperaturaF);
  if (TemperaturaC>=TempAlta) {
  		digitalWrite(AlertaTempBaixa, LOW);
  		digitalWrite(AlertaTempAlta, HIGH);
    }
  	else if (TemperaturaC<=TempBaixa){
  		digitalWrite(AlertaTempBaixa, HIGH);
  		digitalWrite(AlertaTempAlta, LOW);
  	}
  	else {
  		digitalWrite(AlertaTempBaixa, LOW);
  		digitalWrite(AlertaTempAlta, LOW);
    }

  	delay(1000);
}