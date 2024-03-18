// Projeto realizado para a disciplina de Sistemas Microprocessados (ensino técnico). Link de acesso no TinkerCad: https://www.tinkercad.com/things/awAwdlQNEK1-escolha-entre-opcoes-sm/editel?returnTo=%2Fthings%2FawAwdlQNEK1-escolha-entre-opcoes-sm&sharecode=jkAeJtzxnXfmKYYa9Xpn4GjCU7vKNiJRXRq6qAVrPJA

#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 10, 5, 4, 3, 2);
const int buttonPin = 1;
int buttonState = 0;
void setup()
{
lcd.begin(16, 2);
pinMode(buttonPin, INPUT);
}
void loop()
{
buttonState = digitalRead(buttonPin);
if (buttonState == HIGH) {
lcd.clear();
lcd.setCursor(4,0);
lcd.print("pingado");
lcd.setCursor(2,1);
lcd.print("pao na chapa");
delay(3000);
}
else{
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("escolha a opcao");
lcd.setCursor(4, 1);
lcd.print("desejada");}
delay(2000);}