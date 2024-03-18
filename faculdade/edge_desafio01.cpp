// Projeto-desafio realizado para a disciplina de Edge Computing & Computer Systems (faculdade). Link de acesso no TinkerCad: https://www.tinkercad.com/things/6Z5P1QoqP6s-desafio-farois-edge-computing-and-computer-systems/editel?returnTo=%2Fthings%2F6Z5P1QoqP6s-desafio-farois-edge-computing-and-computer-systems&sharecode=muSCUE6_ipIQGjYYyVroBBKIZtRoysLXOHfSuROaRpo

void setup()
{
pinMode(13, OUTPUT);
pinMode(12, OUTPUT);
pinMode(11, OUTPUT);
}

void loop()
{
  digitalWrite (13, HIGH);
  digitalWrite (12, LOW);
  digitalWrite (11, LOW);
  delay (1000);
  digitalWrite (12, HIGH);
  digitalWrite (13, HIGH);
  digitalWrite (11, LOW);
  delay (777);
  digitalWrite (11, HIGH);
  digitalWrite (12, LOW);
  digitalWrite (13, LOW);
  delay (2222);
  digitalWrite (12, HIGH);
  digitalWrite (13, LOW);
  digitalWrite (11, LOW);
  delay (777);
}