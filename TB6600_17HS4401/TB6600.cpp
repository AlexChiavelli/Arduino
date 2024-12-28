#include "TB6600.h"

void TB6600_init() {
  // Se occorre gestire ENABLE o altre logiche:
  // pinMode(ENABLE_PIN, OUTPUT);
  // digitalWrite(ENABLE_PIN, LOW);
}

void TB6600_rotate(bool direction, int steps) {
  // Imposta la direzione
  digitalWrite(DIR_PIN, direction ? HIGH : LOW);

  // Genera i segnali di step
  for(int i = 0; i < steps; i++) {
    digitalWrite(STEP_PIN, HIGH);
    delayMicroseconds(500);      // Regola la velocità
    digitalWrite(STEP_PIN, LOW);
    delayMicroseconds(500);      // Regola la velocità
  }
}