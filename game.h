#ifndef GAME_H
#define GAME_H

#include "board.h"
#include "ghosts.h"
#include "populatePellets.h"
#include "pacman.h"
#include "pellets.h"
#include "populateGhosts.h"

#include <cstdlib> /* rand, srand (aka seed) */
#include <ctime> /* time for seed for rand */
#include <cstdio> /* NULL, printf */

class game
{
	public:
		gameBoard * board0;
		populatePellets * pellets0;
		populateGhosts * ghosts0;
		pacman * pacman0;

		TexRect * background;
		int ghostMovement[4];

		bool gameOver;

		game();

		void drawAll();
		void animateAll();
		void advanceAllAnimations();
		void redrawAnimated();

		void collisionHandler(float, float);

		void specialKeyHandler(int);
		void regularKeyHandler(unsigned char);

		~game();

};

#endif
