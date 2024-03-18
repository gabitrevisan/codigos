// Projeto realizado para a disciplina de Sistemas Microprocessados (ensino técnico). Link de acesso no TinkerCad: https://www.tinkercad.com/things/gz2l7RoHtpn-contagem-de-9-a-0-sm/editel?returnTo=%2Fthings%2Fgz2l7RoHtpn-contagem-de-9-a-0-sm&sharecode=wjEhXESDDgfu41V_Dw9rlUehe2gbCOGEqTOhawesHVQ

byte seven_seg_digits[10][7] = {{1,1,1,0,0,1,1},
{1,1,1,1,1,1,1},
{1,1,1,0,0,0,0},
{1,0,1,1,1,1,1},
{1,0,1,1,0,1,1},
{0,1,1,0,0,1,1},
{1,1,1,1,0,0,1},
{1,1,0,1,1,0,1},
{0,1,1,0,0,0,0},
{1,1,1,1,1,1,0},
};

void setup ()
{
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (5, OUTPUT);
  pinMode (6, OUTPUT);
  pinMode (7, OUTPUT);
  pinMode (8, OUTPUT);
}

void sevenSegWrite (byte digit)
{
  byte pin = 2;
  
  for (byte segCount = 0; segCount < 7; ++segCount)
  {
    digitalWrite(pin, seven_seg_digits[digit][segCount]);
    ++pin;
  }
}
void loop()
{
  for (byte count = 0; count < 10 ; count++)
  {
    delay (1000);
    sevenSegWrite (count);
  }
  delay (2000);
}