#include "game.h"

game::game()
{
	board0 = new gameBoard();
	pellets0 = new populatePellets();
	ghosts0 = new ghosts();
	pacman0 = new pacman();
}

void game::drawAll()
{
	pellets0->drawPellets();

	board0->drawBlocks();

  ghosts0->drawGhosts(); //draws to memory (MUST DO BEFORE ANIMATION)
	ghosts0->animateGhosts(); //draws onto screen

	pacman0->drawPacman(); //same logic as above
	pacman0->animatePacman(); //same logic as above
}

void game::mouseHandler(float x, float y)
{

}

void game::collisionHandler(float x, float y)
{

}

void game::keyBoardHandler(int key, bool isKeyUp)
{

}

game::~game()
{
	delete board0;
	delete pellets0;
	delete ghosts0;
	delete pacman0;
}
