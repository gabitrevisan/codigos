// Projeto realizado para a disciplina de Sistemas Microprocessados (ensino técnico). Link de acesso no TinkerCad: https://www.tinkercad.com/things/gS6NizosvW8-contagem-de-0-a-99-com-dois-displays-e-um-botao-sm/editel?returnTo=%2Fdashboard%3Ftype%3Dcircuits%26collection%3Ddesigns%26pageSize%3D24%26page%3D0&sharecode=NhQ74qXkp9ESPwbLiWt68Xar41BWMB2FYqc-zHwMpYU

const int l = 1, d = 0;
int buttonState1 = 0;

int unidades[] = {0, 1, 2, 3, 4, 5, 6};
int dezenas[] = {7, 8, 9, 10, 11, 12, 13};

byte digito[10][7] = { 
{ l,l,l,l,l,l,d },
{ d,l,l,d,d,d,d },
{ l,l,d,l,l,d,l }, 
{ l,l,l,l,d,d,l }, 
{ d,l,l,d,d,l,l }, 
{ l,d,l,l,d,l,l }, 
{ l,d,l,l,l,l,l }, 
{ l,l,l,d,d,d,d }, 
{ l,l,l,l,l,l,l }, 
{ l,l,l,d,d,l,l } 
}; 

const int SEGMENTOS = 7;
const int NUMEROS = 10;
 
void setup(){
  for(int i = 0; i < 9; i++) {
       pinMode(dezenas[i], OUTPUT);
       pinMode(unidades[i], OUTPUT);
    pinMode (A3, INPUT);
    }
}

void loop() {
  {buttonState1 = digitalRead (A3);
   if (buttonState1 == HIGH) {
  for(int k = 0; k < 10; k++) {
       acende(dezenas, k);
       for(int i = 0; i < 10; i++) {
          acende(unidades, i);
          delay(400);
       } 
    }
   } else {
       delay (500);
     }
  } }

void acende(int* pino, int dig) {
    for(int i = 0; i < SEGMENTOS; i++) {
       digitalWrite(pino[i], digito[dig][i]);
    } }