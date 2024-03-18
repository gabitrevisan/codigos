// Projeto realizado para a disciplina de Sistemas Microprocessados (ensino técnico). Link de acesso no TinkerCad: https://www.tinkercad.com/things/3l6tdeLL19o-teclado-matricial-aula-15-sm/editel?returnTo=%2Fthings%2F3l6tdeLL19o-teclado-matricial-aula-15-sm&sharecode=VrKl97aqlQK7hn5q8saAp2HPvd38X9JjB5GPutWPmRc

void setup()
{
pinMode (3, OUTPUT);
pinMode (4, OUTPUT);
pinMode (5, OUTPUT);
pinMode (6, OUTPUT);
pinMode (8, INPUT);
pinMode (9, INPUT);
pinMode (10, INPUT);
pinMode (11, INPUT);
Serial.begin(9600);
Serial.println("Aguardando acionamento das teclas...");
Serial.println();
}

void loop ()
{
for (int ti = 3; ti<7; ti++)
{
digitalWrite(3, LOW);
digitalWrite(4, LOW);
digitalWrite(5, LOW);
digitalWrite(6, LOW);
digitalWrite(ti, HIGH);
if (digitalRead(8) == HIGH)
{
imprime_linha_coluna(ti-2, 1);
  while(digitalRead(8) == HIGH){}
}
if (digitalRead(9) == HIGH)
{
imprime_linha_coluna(ti-2, 2);
  while(digitalRead(9) == HIGH){}
}
if (digitalRead(10) == HIGH)
{
imprime_linha_coluna(ti-2, 3);
  while(digitalRead(10) == HIGH){}
}
if (digitalRead(11) == HIGH)
{
imprime_linha_coluna(ti-2,4);
  while(digitalRead(11) == HIGH){}
}
}
delay(10);
}
void imprime_linha_coluna(int x, int y)
{
Serial.print("Linha : ");
Serial.print(x);
Serial.print(" x Coluna : ");
Serial.print(y);
Serial.print(" x Tecla : ");
if(x==1){
if(y==1){
Serial.print("1");
}
if(y==2){
Serial.print("2");
}
if(y==3){
Serial.print("3");
}
if(y==4){
Serial.print("A");
}
}
if(x==2){
if(y==1){
Serial.print("4");
}
if(y==2){
Serial.print("5");
}
if(y==3){
Serial.print("6");
}
if(y==4){
Serial.print("B");
}
}
if(x==3){
if(y==1){
Serial.print("7");
}
if(y==2){
Serial.print("8");
}
if(y==3){
Serial.print("9");
}
if(y==4){
Serial.print("C");
}
}
if(x==4){
if(y==1){
Serial.print("*");
}
if(y==2){
Serial.print("0");
}
if(y==3){
Serial.print("#");
}
if(y==4){
Serial.print("D");
}
}
delay(10);
Serial.println();
}