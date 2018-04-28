#ifndef BOARD_H
#define BOARD_H

#include <vector>
#include "TexRect.h"

class gameBoard
{
    vector < TexRect* > blocks;
    //populate this vector with blocks for the gameboard, assign them the appropriate bmp texture file
    public:
      gameBoard();
      ~gameBoard();
};

#endif
