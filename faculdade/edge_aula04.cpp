// Projeto realizado para a disciplina de Edge Computing & Computer Systems (faculdade). Link de acesso no TinkerCad: https://www.tinkercad.com/things/a1hXkNbrVoi-aula-04-edge-computing-and-computer-systems/editel?returnTo=%2Fthings%2Fa1hXkNbrVoi-aula-04-edge-computing-and-computer-systems&sharecode=jmuraGjeTCO09DjcSi37-8otyfnMZfTC5KaxWdGT5Fw

int inches = 0;
int cm = 0;
int ledPin = 9;
int buzzer = 8;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  
  cm = 0.01723 * readUltrasonicDistance(7, 7);
  inches = (cm / 2.54);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100);
 if (cm <= 77){
   digitalWrite (ledPin, HIGH);
   digitalWrite (buzzer, HIGH);
 delay(700);
 	digitalWrite (buzzer, LOW);
 delay (700); }
 else {
   digitalWrite (ledPin, LOW);
   digitalWrite (buzzer, LOW); }
}