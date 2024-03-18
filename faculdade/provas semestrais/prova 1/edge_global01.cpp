// Código

// Variáveis
const int SensorTempPino = 0;
const int AlertaTempBaixa = 10; //LED verde
const int AlertaTempNormal = 9; //LED amarelo
const int AlertaTempAlta = 13; //LED vermelho
const int TempNormal = 23; //temperatura normal = abaixo de 23ºC
const int TempBaixa = 0; //temperatura baixa = abaixo de 0ºC
const int TempAlta = 24; //temperatura alta = acima 24ºC
const int buzzer = 8;
const int sensorValue  = 0;

void setup() 
{
  pinMode(AlertaTempNormal, OUTPUT);
  pinMode(AlertaTempBaixa, OUTPUT);
  pinMode(AlertaTempAlta, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  int SensorTempTensao=analogRead(SensorTempPino); // Faz a leitura da tensao no Sensor de Temperatura
  // Converte a tensao lida
  float Tensao = SensorTempTensao*5;
  Tensao/=1024;
  float TemperaturaC =(Tensao-0.5)*100; // Converte a tensao lida em Graus Celsius

  // Acende ou apaga os alertas luminosos de temperatura baixa e alta
  if (TemperaturaC >= TempAlta) {
    digitalWrite(AlertaTempNormal, LOW);
    digitalWrite(AlertaTempBaixa, LOW);
    digitalWrite(AlertaTempAlta, HIGH);
    digitalWrite(buzzer, HIGH);
    delay(500);
  }
  else if (TemperaturaC <= TempBaixa) {
    digitalWrite(AlertaTempNormal, LOW);
  	digitalWrite(AlertaTempBaixa, HIGH);
  	digitalWrite(AlertaTempAlta, LOW);
    digitalWrite(buzzer, LOW);
    delay(500);
  }
  else {
    digitalWrite(AlertaTempNormal, HIGH);
  	digitalWrite(AlertaTempBaixa, LOW);
  	digitalWrite(AlertaTempAlta, LOW);
    digitalWrite(buzzer, LOW);
    delay(500);
  }
}