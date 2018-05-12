#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "TexRect.h"

using namespace std;

class gameBoard
{
public:
  vector<TexRect *> blocks;

  gameBoard();
  void drawBlocks();
  ~gameBoard();
};

#endif
