#include "die.h"

#include <ctime>
#include <random>

Die::Die() { srand(time(NULL)); }

void Die::roll() { this->_faceValue = (rand() % 6) + 1; }
