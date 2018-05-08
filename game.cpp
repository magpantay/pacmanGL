#include "game.h"

static game* singleton;

void app_timer(int val)
{
    if (!singleton->gameOver)
    {
    		if (singleton->pacman0->up){
				if(singleton->wallCollisionHandler()){
					//singleton->pacman0->up = false;
					singleton->pacman0->decY();
				}else{
    				singleton->pacman0->moveUp(0.01);
					singleton->collisionHandler();
					singleton->pelletCollisionHandler();
				}
    		}
    		if (singleton->pacman0->down){
				if(singleton->wallCollisionHandler()){
					//singleton->pacman0->down = false;
					singleton->pacman0->incY();
				}else{
    				singleton->pacman0->moveDown(0.01);
					singleton->collisionHandler();
					singleton->pelletCollisionHandler();
				}
    		}
    		if (singleton->pacman0->left){
				if(singleton->wallCollisionHandler()){
					//singleton->pacman0->left = false;
					singleton->pacman0->incX();
				}else{
    				singleton->pacman0->moveLeft(0.01);
					singleton->collisionHandler();
					singleton->pelletCollisionHandler();
				}
    		}
    		if (singleton->pacman0->right){
				if(singleton->wallCollisionHandler()){
					//singleton->pacman0->right = false;
					singleton->pacman0->decX();
				}else{
    				singleton->pacman0->moveRight(0.01);
					singleton->collisionHandler();
					singleton->pelletCollisionHandler();
				}
    		}

    		for (int i = 0; i < 4; i++)
    		{
    				if (singleton->ghosts0->spoopy[i]->up)
    					singleton->ghosts0->moveUp(i, 0.01);
    				else if (singleton->ghosts0->spoopy[i]->down)
    					singleton->ghosts0->moveDown(i, 0.01);
    				else if (singleton->ghosts0->spoopy[i]->left)
    					singleton->ghosts0->moveLeft(i, 0.01);
    				else
    					singleton->ghosts0->moveRight(i, 0.01);
    		}

        singleton->advanceAllAnimations();
        glutTimerFunc(50, app_timer, val);
    }
    else
    {
          singleton->gameOverText->animate();
          singleton->gameOverText->draw();
          glutTimerFunc(150, app_timer, val); //keep at 80, seems to be good animation speed for pacman
    }
}

void random_number_generator(int val)
{
  	if(!singleton->gameOver)
  	{
    		  for (int i = 0; i < 4; i++)
    			{
    					singleton->ghostMovement[i] = rand() % 4; //generate random number for each ghost from 0-3, each one representing a direction
    					/* 0 is up, 1 is down, 2 is left, 3 is right */
    			}
    			for (int i = 0; i < 4; i++)
    			{
    					singleton->ghosts0->changeDirection(i, singleton->ghostMovement[i]);
    			}
    			glutTimerFunc(2000, random_number_generator, val);
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


game::game()
{
			srand(time(NULL)); //seed for random
			singleton = this;
      background = new TexRect("images/black.png", -1, 1, 2, 2);
			board0 = new gameBoard();

      if (doesFileExist("pacsave.txt"))
      {
          std::ifstream saveFile;
          saveFile.open("pacsave.txt");

          vector < string > fileInputs;
          string buffer;

          while (saveFile >> buffer)
          {
              fileInputs.push_back(buffer);
          }

          saveFile.close();

          float px, py, blinky_x, blinky_y, pinky_x, pinky_y, inky_x, inky_y, clyde_x, clyde_y;

          px = atof(fileInputs[1].c_str());
          py = atof(fileInputs[2].c_str());

          bool pleft, pright, pup, pdown;

          for (int i = 3; i < 7; i++)
          {
              pleft = toBool(fileInputs[3]);
              pright = toBool(fileInputs[4]);
              pup = toBool(fileInputs[5]);
              pdown = toBool(fileInputs[6]);
          }

          blinky_x = atof(fileInputs[7].c_str());
          blinky_y = atof(fileInputs[8].c_str());
          pinky_x = atof(fileInputs[9].c_str());
          pinky_y = atof(fileInputs[10].c_str());
          inky_x = atof(fileInputs[11].c_str());
          inky_y = atof(fileInputs[12].c_str());
          clyde_x = atof(fileInputs[13].c_str());
          clyde_y = atof(fileInputs[14].c_str());

          pacman0 = new pacman((fileInputs[0]).c_str(), px, py, pleft, pright, pup, pdown);
          ghosts0 = new populateGhosts(blinky_x, blinky_y, pinky_x, pinky_y, inky_x, inky_y, clyde_x, clyde_y); //no need to determine where ghosts are going or loading textures here, because it gets randomly generated in a few lines

          pellets0 = new populatePellets(); //saving comes at the cost of having to get all the pellets again

      }

      else
      {
    			pellets0 = new populatePellets();
    			ghosts0 = new populateGhosts();
    			pacman0 = new pacman();

          gameOverText = new AnimatedRect("images/game_over.png", 7, 1, -0.5, 0.5, 1, 1);
      }

    	gameOver = false;
			random_number_generator(1);
			app_timer(2);

}

bool game::toBool(string const & s)
{
    return s != "0";
}

bool game::doesFileExist(const char* fileName)
{
    std::ifstream infile(fileName);
    return infile.good();
}

void game::drawAll()
{
			background->draw();

			pellets0->drawPellets();
			board0->drawBlocks();

			pacman0->animate();
			ghosts0->animateGhosts();

		  ghosts0->drawGhosts();
			pacman0->draw();
}


void game::advanceAllAnimations()
{
			pacman0->advance();
			ghosts0->advanceAllGhostsAnimation();
}

void game::regularKeyHandler(unsigned char key)
{
      if (key == 27) // esc key
      {
          if (doesFileExist("pacsave.txt"))
          {
              if (remove("pacsave.txt") != 0)
              {
                  cout << "No write access to delete" << endl;
              } //delete save file if esc is pressed
          }
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
    if (key == 112){ // ` key
        // Save and exit the app when ` key is pressed

        ofstream writeSaveFile;
        writeSaveFile.open("pacsave.txt");

        string pacman_filename;
        pacman_filename = "BMPs/pacman/pacman_";

        if (pacman0->left) pacman_filename += "left.png";
        else if (pacman0->right) pacman_filename += "right.png";
        else if (pacman0->up) pacman_filename += "up.png";
        else pacman_filename += "down.png";

        writeSaveFile << pacman_filename << " " << pacman0->getX() << " " << pacman0->getY() << " " << pacman0->left << " " << pacman0->right << " " << pacman0->up << " " << pacman0->down << " ";
        writeSaveFile << ghosts0->spoopy[0]->getX() << " " << ghosts0->spoopy[0]->getY() << " ";
        writeSaveFile << ghosts0->spoopy[1]->getX() << " " << ghosts0->spoopy[1]->getY() << " ";
        writeSaveFile << ghosts0->spoopy[2]->getX() << " " << ghosts0->spoopy[2]->getY() << " ";
        writeSaveFile << ghosts0->spoopy[3]->getX() << " " << ghosts0->spoopy[3]->getY() << " ";

        writeSaveFile.close();

        exit(0);
    }
    
		pacman0->changeDirection(key); //because we only worry about the left, right, down, up special keys, meaning it just affects pacman
}

void game::collisionHandler()
{
	for(int i = 0; i < ghosts0->spoopy.size();i++){
		if(pacman0->contains(ghosts0->spoopy[i])){
			std::cout << "Pacman collided with a Ghost" << std::endl;
		}
	}
}

void game::pelletCollisionHandler()
{
	for(int i = 0; i < pellets0->pelletStuff.size();i++){
		if(pellets0->pelletStuff[i]->contains(pacman0)){
			std::cout << "Pacman collided with a Pellet" << std::endl;
		}
	}
}

bool game::wallCollisionHandler(){
	bool collision = false;
	for(int i = 0; i < board0->blocks.size();i++){
		if(board0->blocks[i]->contains(pacman0) == true){
			return !collision;
		}
			//std::cout << "Pacman collided with a Wall " << i << std::endl;
	}
	return collision;
}

game::~game()
{
	delete board0;
	delete pellets0;
	delete ghosts0;
	delete pacman0;
}
