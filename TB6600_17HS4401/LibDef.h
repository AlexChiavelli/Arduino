#ifndef LIBDEF_H
#define LIBDEF_H

#include <Arduino.h>

// Pin utilizzati
#define DIR_PIN   9
#define STEP_PIN  8

// Numero di passi necessari a compiere un giro completo
// se il motore standard ha 200 passi/giro, moltiplica per
// il microstepping impostato sul driver (es. 200 * 8 = 1600)
#define STEPS_PER_REV 200

#endif