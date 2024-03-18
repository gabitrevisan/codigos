// Código

#define buzzer 8
#define gas_reading A0
void setup()
{
  pinMode(buzzer,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  int value=analogRead(gas_reading);
  Serial.println(value);
  delay(1000);
  if(value>=300);
  {
    tone(buzzer, 2000);
    delay(500);
    noTone(buzzer);
    delay(500);
    tone(buzzer, 2000);
    noTone(buzzer);
    delay(500);
  }
}