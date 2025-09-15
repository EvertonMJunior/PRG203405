#include <iostream>

#include "dice_game.h"
#include "die.cpp"

using namespace std;

bool DiceGame::play() {
  unsigned int fVD1, fVD2;

  cout << "Rolling the dice..." << endl;

  this->_die1.roll();
  this->_die2.roll();

  fVD1 = _die1.getFaceValue();
  fVD2 = _die2.getFaceValue();

  cout << "Dice 1: " << fVD1 << endl;
  cout << "Dice 2: " << fVD2 << endl;

  return (fVD1 + fVD2) == 7;
}
