#include "die.h"

Die::Die() {
  this->_distribution = uniform_int_distribution<int>(1, 6);
  this->_generator = mt19937(random_device{}());
}

void Die::roll() { this->_faceValue = _distribution(_generator) + 1; }
