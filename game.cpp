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
			pacman0->drawPacman(); //same logic as above

}

void game::animateAll() //if only drew but not animate AnimatedRects, then it won't appear on screen, only in memory
{
			pacman0->animatePacman();
			ghosts0->animateGhosts();
}

void game::regularKeyHandler(unsigned char key)
{
			if (key == 27){ // escape key
					// Exit the app when Esc key is pressed
					exit(0);
			}

			if (key == ' '){ // restart game??
				  //restart();
					/* ball->x = 0;
					ball->y = 0.67;
					ball->yinc = 0.01;
					ball->xinc = 0.01;
					ball->rising = false;
					game_over = false;
					gameOver->stop();
					moving = true; */
			}

			else //because really you can only move pacman
			{
					pacman0->changeDirection(key);
			}
}

void game::specialKeyHandler(int key)
{
		pacman0->changeDirection(key); //because we only worry about the left, right, down, up special keys, meaning it just affects pacman
}

void game::collisionHandler(float x, float y)
{

}

game::~game()
{
	delete board0;
	delete pellets0;
	delete ghosts0;
	delete pacman0;
}
