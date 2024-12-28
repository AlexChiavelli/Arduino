#ifndef TB6600_H
#define TB6600_H

#include "LibDef.h"

// Inizializza il TB6600 (se hai pin EN o altre logiche)
void TB6600_init();

// Ruota il motore TB6600 in direction: 
// - true per orario,
// - false per antiorario,
//   con un numero di passi definito
void TB6600_rotate(bool direction, int steps);

#endif