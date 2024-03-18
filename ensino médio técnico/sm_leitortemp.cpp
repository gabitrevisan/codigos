// Projeto realizado para a disciplina de Sistemas Microprocessados (ensino técnico). Link de acesso no TinkerCad: https://www.tinkercad.com/things/6SB9kRVWPMm-leitor-de-temperatura-sm/editel?returnTo=%2Fthings%2F6SB9kRVWPMm-leitor-de-temperatura-sm&sharecode=6bbkHChav0R6enVEBNDQn5BjyASz4AIyHUhLNqp_wTU

void setup() {
Serial.begin(9600);
}
void loop() {
int sensorValue = analogRead(A0);
float voltage = sensorValue * (5.0 / 1023.0);
float temp = sensorValue * (100.0 / 1023.0);
Serial.println(voltage);
  delay(1000);
Serial.println(temp);
}