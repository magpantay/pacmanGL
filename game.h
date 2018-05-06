#ifndef GAME_H
#define GAME_H

#include "board.h"
#include "ghosts.h"
#include "populatePellets.h"
#include "pacman.h"
#include "pellets.h"
#include "populateGhosts.h"

class game
{
	public:
		gameBoard * board0;
		populatePellets * pellets0;
		populateGhosts * ghosts0;
		pacman * pacman0;

		bool gameOver;

		game();

		void drawAll();
		void animateAll();
		void advanceAllAnimations();

		void collisionHandler(float, float);

		void specialKeyHandler(int);
		void regularKeyHandler(unsigned char);

		~game();

};

#endif
