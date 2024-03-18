// Projeto realizado para a disciplina de Edge Computing & Computer Systems (faculdade). Link de acesso no TinkerCad: https://www.tinkercad.com/things/iCuXztmV3cK-nome-e-valor-da-tensao-sm/editel?returnTo=%2Fthings%2FiCuXztmV3cK-nome-e-valor-da-tensao-sm&sharecode=yjDCWI-JvSvKMQGZO63aiyteX82_BZysoKsgqN0hnvM

#include <LiquidCrystal.h>
const int rs = 8, en = 7, d4 = 6, d5 = 5, d6 = 4, d7 = 3;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);
int sensorValue = 0;
const int buttonPin = 9;
int buttonState = 0;
void setup()
{
lcd.begin(16, 2);
Serial.begin (9600);
}
void loop()
{
buttonState = digitalRead (buttonPin);
if (buttonState == LOW){
sensorValue = analogRead(A0);
float voltage = sensorValue * (5.0 / 1023.0);
lcd.clear();
lcd.setCursor(0, 0);
lcd.print("gabi linda");
lcd.setCursor(0, 1);
lcd.print("Tensao = ");
lcd.print(voltage);
lcd.print(" V");
delay (1500);
Serial.print ("Tensao = ");
Serial.print(voltage);
Serial.println (" V");
} else {
lcd.clear ();
lcd.setCursor(0,0);
lcd.print("    ACIONE O");
lcd.setCursor(0,1);
lcd.print("     BOTAO");
delay (1500);
}
}