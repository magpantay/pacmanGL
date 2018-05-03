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
	for (int i = 0; i < (pellets0->pelletStuff).size(); i++)
	{
		(pellets0->pelletStuff)[i]->draw();
	}

	for (int i = 0; i < (board0->blocks).size(); i++)
	{
		(board0->blocks)[i]->draw();
	}

	for (int i = 0; i < (ghosts0->spoopy).size(); i++)
	{
		(ghosts0->spoopy)[i]->draw(); //will draw into buffer
		(ghosts0->spoopy)[i]->animate(); //will draw on the screen
	}

	(pacman0->pac)->draw();
	(pacman0->pac)->animate();
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