// Projeto realizado para a disciplina de Sistemas Microprocessados (ensino técnico). Link de acesso no TinkerCad: https://www.tinkercad.com/things/9CWTTiZnCvd-rpm-com-botoes-e-leitor-digital-sm/editel?returnTo=%2Fthings%2F9CWTTiZnCvd-rpm-com-botoes-e-leitor-digital-sm&sharecode=OLqg6V9TXF5JMj9jKHYnRinEXnkbaU-UOhY0A_pDxWg

int buttonState1 = 0;
int buttonState2 = 0;
void setup()
{
pinMode(2, INPUT);
pinMode(3, INPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
}
void loop()
{
buttonState1 = digitalRead(2);
if (buttonState1 == HIGH) {
digitalWrite(8, HIGH);
digitalWrite(9, LOW);
}
{
buttonState2 = digitalRead(3);
if (buttonState2 == HIGH) {
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
}
else {
digitalWrite(8,LOW);
digitalWrite(9,LOW);
}
delay(10);
}
}