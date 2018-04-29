#include "board.h"

gameBoard::gameBoard()
{
  //populate this vector with blocks for the gameboard, assign them the appropriate bmp texture file
  //(const char* filename, int rows, int cols, float x=0, float y=0, float w=0.5, float h=0.5)
    TexRect * top_bar = new TexRect ("BMPs/bluesquare.bmp", 1, 1, -1.0, 0.9, 2.0, 0.1); //reason height is 0.1 each block is because we need 0.1 at the top for score, meaning we have 19 blocks left to use. 1.9/19 = 0.1
    blocks.push_back(top_bar); //left top

    TexRect * leftmost_downbar0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0, 0.8, (2.0/19.0), 0.5); //reason for 2.0/19.0 is because distance from -1 to 1 is 2 and 19.0 blocks is from the amount of blocks horizontally in a Pacman game
    blocks.push_back(leftmost_downbar0);

    TexRect * leftmost_horizbar0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0, 0.3, 4.0*(2.0/19.0), 0.1);
    blocks.push_back(leftmost_horizbar0);

    TexRect * left_singlebox0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, (-1.0+(3.0*(2.0/19.0))), 0.2, (2.0/19.0), 0.1);
    blocks.push_back(left_singlebox0);

    TexRect * leftmost_horizbar1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0, 0.1, 4.0*(2.0/19.0), 0.1);
    blocks.push_back(leftmost_horizbar1);

    TexRect * leftmost_horizbar2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0, -0.1, 4.0*(2.0/19.0), 0.1);
    blocks.push_back(leftmost_horizbar2);

    TexRect * left_singlebox1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, (-1.0+(3.0*(2.0/19.0))), -0.2, (2.0/19.0), 0.1);
    blocks.push_back(left_singlebox1);

    TexRect * leftmost_horizbar3 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0, -0.3,  4.0*(2.0/19.0), 0.1);
    blocks.push_back(leftmost_horizbar3);

    TexRect * leftmost_downbar1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0,-0.4, (2.0/19.0), 0.5);
    blocks.push_back(leftmost_downbar1);

    TexRect * bottom_bar = new TexRect ("BMPs/bluesquare.bmp", 1, 1, -1.0, -0.9, 2.0, 0.1);
    blocks.push_back(bottom_bar);

    TexRect * rightmost_downbar0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(2.0/19.0), 0.8, (2.0/19.0), 0.5);
    blocks.push_back(rightmost_downbar0);

    TexRect * rightmost_horizbar0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*(2.0/19.0)), 0.3, 4.0*(2.0/19.0), 0.1);
    blocks.push_back(rightmost_horizbar0);

    TexRect * right_singlebox0 = new TexRect("BMPs/bluesquare.bmp", 1, 1, (1.0-(4.0*(2.0/19.0))), 0.2, (2.0/19.0), 0.1);
    blocks.push_back(right_singlebox0);

    TexRect * rightmost_horizbar1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*(2.0/19.0)), 0.1,  4.0*(2.0/19.0), 0.1);
    blocks.push_back(rightmost_horizbar1);

    TexRect * rightmost_horizbar2 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*(2.0/19.0)), -0.1, 4.0*(2.0/19.0), 0.1);
    blocks.push_back(rightmost_horizbar2);

    TexRect * right_singlebox1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, (1.0-(4.0*(2.0/19.0))), -0.2, (2.0/19.0), 0.1);
    blocks.push_back(right_singlebox1);

    TexRect * rightmost_horizbar3 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(4.0*(2.0/19.0)), -0.3, 4.0*(2.0/19.0), 0.1);
    blocks.push_back(rightmost_horizbar3);

    TexRect * rightmost_downbar1 = new TexRect("BMPs/bluesquare.bmp", 1, 1, 1.0-(2.0/19.0),-0.4, (2.0/19.0), 0.5);
    blocks.push_back(rightmost_downbar1);

    TexRect * top_middlebar = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(9.0*(2.0/19.0)), 0.8, (2.0/19.0), 0.2);
    blocks.push_back(top_middlebar);

    TexRect * bottom_middlebar = new TexRect("BMPs/bluesquare.bmp", 1, 1, -1.0+(9.0*(2.0/19.0)), -0.7, (2.0/19.0), 0.2);
    blocks.push_back(bottom_middlebar);
}
