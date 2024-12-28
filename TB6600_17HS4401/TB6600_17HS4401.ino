#include "LibDef.h"
#include "TB6600.h"


// Definizione dei pin utilizzati
const int dirPin = 9;   // Pin direzione
const int stepPin = 8;  // Pin impulsi
// Nota: non usiamo un pin di enable perché ENA+ è cablato a 5V e ENA- a GND o non collegato

// Numero di passi per un giro completo (motore standard 200 passi; 
// se usi microstepping, moltiplica di conseguenza)
const int stepsPerRevolution = 6400;

// Velocità di rotazione (in microsecondi di attesa tra un impulso e il successivo)
const int stepDelay = 10; // Più basso = più veloce

void setup() {
  pinMode(dirPin, OUTPUT);
  pinMode(stepPin, OUTPUT);

  // Opzionalmente, se vuoi testare che il driver sia abilitato da subito
  // digitalWrite(enablePin, LOW); // a seconda di come hai collegato ENA
}

void loop() {
  // Ruota in senso antiorario
  digitalWrite(dirPin, LOW); 
  for (int i = 0; i < stepsPerRevolution; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(stepDelay);
  }
  delay(1000); // Pausa di 1 secondo prima di cambiare direzione

  // Ruota in senso orario
  digitalWrite(dirPin, HIGH);
  for (int i = 0; i < stepsPerRevolution; i++) {
    digitalWrite(stepPin, HIGH);
    delayMicroseconds(stepDelay);
    digitalWrite(stepPin, LOW);
    delayMicroseconds(stepDelay);
  }
  delay(1000); // Pausa di 1 secondo prima di ripetere
}