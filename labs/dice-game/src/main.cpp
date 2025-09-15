/*
  Dice Game
  Aluno: Everton Marcelino Junior
  Disciplina: Programação Orientada a Objetos
  Professor: Hugo Marcondes
  Data: 15/09/2025
*/
#include <iostream>
#include "classes/dice_game.cpp"

using namespace std;

int main(int, char **) {
  DiceGame game;

  if (game.play()) {
    cout << "You won the game!" << endl;
  } else {
    cout << "You lost the game..." << endl;
  }

  return 0;
}
