#pragma once

#include "die.h"

class DiceGame {
private:
  Die _die1;
  Die _die2;

public:
  DiceGame() {
    _die1 = Die();
    _die2 = Die();
  }
  bool play();
};
