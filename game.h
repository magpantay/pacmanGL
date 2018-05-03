#ifndef GAME_H
#define GAME_H

#include "board.h"
#include "ghosts.h"
#include "populatePellets.h"
#include "pacman.h"
#include "pellets.h"

class game
{
	public:
		gameBoard * board0;
		populatePellets * pellets0;
		ghosts * ghosts0;
		pacman * pacman0;

		game();

		void drawAll();
		void mouseHandler(float x, float y);
		void collisionHandler(float x, float y);
		void keyBoardHandler(int key, bool isKeyUp);

		~game();

};

#endif
