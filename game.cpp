#include "game.h"

static game* singleton;

void app_timer(int val)
{
	if (singleton->pacman0->up){
			singleton->pacman0->moveUp(0.01);
	}
	if (singleton->pacman0->down){
			singleton->pacman0->moveDown(0.01);
	}
	if (singleton->pacman0->left){
			singleton->pacman0->moveLeft(0.01);
	}
	if (singleton->pacman0->right){
			singleton->pacman0->moveRight(0.01);
	}

  if (!singleton->gameOver)
  {
    singleton->advanceAllAnimations();
    glutTimerFunc(50, app_timer, val);
  }
}

/* void app_timer(int val){
     if (singleton->game_over){
        singleton->gameOver->advance();
        for (int i = 0; i < (singleton->game0->ghosts0->spoopy).size(); i++)
        {
            (singleton->game0->ghosts0->spoopy)[i]->advance(); //just to see it animated
        }
        singleton->game0->pacman0->pac->advance(); //just to see it animated
    }
    // it'll only animate on a game over

    if (singleton->moving){
        singleton->ball->jump();
        float bx = singleton->ball->x + singleton->ball->w/2;
        float by = singleton->ball->y - singleton->ball->h + 0.1;
        if (singleton->platform->contains(bx, by)){
            singleton->ball->rising = true;
            singleton->ball->yinc +=0.005;
            singleton->ball->xinc = singleton->ball->yinc;
            if (singleton->ball->yinc > 0.15){
                singleton->ball->yinc = 0.15;
            }
        }

        if (singleton->ball->y - singleton->ball->h < -0.99){
            singleton->moving = false;
            singleton->game_over = true;
            singleton->gameOver->animate();

        }
    } */

    /*if (singleton->pacman0->up){
        singleton->pacman0->moveUp(0.05);
    }
    if (singleton->pacman0->down){
        singleton->pacman0->moveDown(0.05);
    }
    if (singleton->pacman0->left){
        singleton->pacman0->moveLeft(0.05);
    }
    if (singleton->pacman0->right){
        singleton->pacman0->moveRight(0.05);
    }

		for (int i = 0; i < (singleton->ghosts0->spoopy).size(); i++)
		{
				if ((singleton->ghosts0->spoopy[i])->up){
		        (singleton->ghosts0)->moveUp(i, 0.05);
		    }
		    if ((singleton->ghosts0->spoopy[i])->down){
		        (singleton->ghosts0)->moveDown(i, 0.05);
		    }
		    if ((singleton->ghosts0->spoopy[i])->left){
		        (singleton->ghosts0)->moveLeft(i, 0.05);
		    }
		    if ((singleton->ghosts0->spoopy[i])->right){
		        (singleton->ghosts0)->moveRight(i, 0.05);
		    }
		}

    if (singleton->gameOver){
        singleton->drawAll();
    		glutTimerFunc(80, app_timer, val); //keep at 80, seems to be good animation speed for pacman
    }
    else{
        if (!singleton->gameOver){
            singleton->advanceAllAnimations();
            glutTimerFunc(80, app_timer, val);
        }
    }
} */

game::game()
{
	    background = new TexRect("images/black.png", -1, 1, 2, 2);

			board0 = new gameBoard();
			pellets0 = new populatePellets();
			ghosts0 = new populateGhosts();
			pacman0 = new pacman();

			gameOver = false;
			singleton = this;
			app_timer(1);
}

void game::drawAll()
{
			background->draw();

			pellets0->drawPellets();
			board0->drawBlocks();

		  ghosts0->drawGhosts();
			pacman0->drawPacman();
}

void game::animateAll() //animate changes bool value to true, then draw it to make it appear to screen, without it, it'll just be saved in memory
{
			pacman0->animatePacman();
			ghosts0->animateGhosts();
}

void game::advanceAllAnimations()
{
			pacman0->advancePacmanAnimation();
			ghosts0->advanceAllGhostsAnimation();
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
