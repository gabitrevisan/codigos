// Projeto realizado para a disciplina de Sistemas Microprocessados (ensino técnico). Link de acesso no TinkerCad: https://www.tinkercad.com/things/4pcTeDbcVWc-teclado-matricial-aula-16-sm/editel?returnTo=%2Fthings%2F4pcTeDbcVWc-teclado-matricial-aula-16-sm&sharecode=al-JZh-u5O-BZyMZWHkSAtREHW3v8m5gdmOTD_fOR18

#include <Keypad.h>
#include <LiquidCrystal.h>
LiquidCrystal lcd(A0,A1,A2,A3,A4,A5);
String senha = "2580";
String buf = "";
const byte LINHAS=4;
const byte COLUNAS=4;
char KEYS[LINHAS][COLUNAS]={
{'1','2','3','A'},
{'4','5','6','B'},
{'7','8','9','C'},
{'*','0','#','D'}
};
byte pino_linha[LINHAS]={11,10,9,8};
byte pino_coluna[COLUNAS]={7,6,5,4};
Keypad keypad =
Keypad(makeKeymap(KEYS), pino_linha,
pino_coluna, LINHAS, COLUNAS);
void setup(){
lcd.begin (16,2);
lcd.setCursor(0,0);
lcd.print ("SENHA: ");
}
void loop(){
char key = keypad.getKey();
if (key != NO_KEY){
switch(key){
case 'A':
case 'B':
case 'C':
case 'D':
case '0':
case '1':
case '2':
case '3':
case '4':
case '5':
case '6':
case '7':
case '8':
case '9':
lcd.print(key);
buf+=key;
break;
case '*':
buf = "";
lcd.clear();
lcd.print ("SENHA: ");
break;
case '#':
//lcd.clear();
if(buf == senha){
lcd.setCursor(0,1);
lcd.print ("ACESSO LIBERADO");
buf = "";
}else{
lcd.setCursor(0,1);
lcd.print ("ACESSO NEGADO");
buf = "";
}
delay(2000);
lcd.clear();
lcd.setCursor(0,0);
lcd.print ("SENHA: ");
} } }