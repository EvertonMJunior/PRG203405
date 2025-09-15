#pragma once

class Die {
private:
  unsigned int _faceValue;

public:
  Die();
  void roll();
  int getFaceValue() { return this->_faceValue; }
};
