// Projeto realizado para a disciplina de Sistemas Microprocessados (ensino técnico). Link de acesso no TinkerCad: https://www.tinkercad.com/things/5f2RjeYNn13-rpm-com-serial-monitor-sm/editel?returnTo=%2Fthings%2F5f2RjeYNn13-rpm-com-serial-monitor-sm&sharecode=RJTbgJL5npMCgExau59djo959EANRh5Eu7pAakyc-uI

#include <Stepper.h>

const int stepsPerRevolution = 700;  // passos por volta

Stepper myStepper(stepsPerRevolution, 8,9,10,11);            

void setup() {
  // velocidade (60 RPM):
  myStepper.setSpeed(90);
  // initialize the serial port:
  Serial.begin(9600);
}

void loop() {
  // rotacao em sentido horario
   Serial.println("clockwise");
  myStepper.step(stepsPerRevolution);
  delay(500);
  
   // Agora em direcao oposta, os 200 passos
  Serial.println("counterclockwise");
  myStepper.step(-stepsPerRevolution);
  delay(500); 

}