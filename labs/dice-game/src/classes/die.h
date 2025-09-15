#pragma once

#include <random>
using namespace std;

class Die {
private:
  unsigned int _faceValue;
  uniform_int_distribution<int> _distribution;
  mt19937 _generator;

public:
  Die();
  void roll();
  int getFaceValue() { return this->_faceValue; }
};
