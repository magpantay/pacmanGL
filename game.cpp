#include "game.h"

static game *singleton;

void animateDeath()
{
    if (!singleton->pacman0->done())
    {
        singleton->pacman0->advance();
        singleton->pacman0->draw();
    }
    else
    {
        singleton->pacman0->stop();
        singleton->gameOverText->advance();
    }
}

void animeWon()
{
    //anime is best show
    singleton->youWinText->advance();
}

void app_timer(int val)
{
    if (singleton->gameWon())
    {
        singleton->pacmanWin = true;
        animeWon();
    }
    if (singleton->pacman0->dead)
    {
        animateDeath();
    }
    if (!singleton->pacman0->dead && !singleton->paused && !singleton->pacmanWin)
    {
        if (singleton->pacman0->up)
        {
            if (singleton->wallCollisionHandler())
            {
                singleton->collisionHandler();
                singleton->pacman0->decY(0.02);
                singleton->pacman0->up = false;
            }
            else
            {
                singleton->pacman0->moveUp(0.01);
            }
            singleton->collisionHandler();
            singleton->pelletCollisionHandler();
        }
        if (singleton->pacman0->down)
        {
            if (singleton->wallCollisionHandler())
            {
                singleton->collisionHandler();
                singleton->pacman0->incY(0.02);
                singleton->pacman0->down = false;
            }
            else
            {
                singleton->pacman0->moveDown(0.01);
            }
            singleton->collisionHandler();
            singleton->pelletCollisionHandler();
        }
        if (singleton->pacman0->left)
        {
            if (singleton->wallCollisionHandler())
            {
                singleton->collisionHandler();
                singleton->pacman0->incX(0.02);
                singleton->pacman0->left = false;
            }
            else
            {
                singleton->pacman0->moveLeft(0.01);
            }
            singleton->collisionHandler();
            singleton->pelletCollisionHandler();
        }
        if (singleton->pacman0->right)
        {
            if (singleton->wallCollisionHandler())
            {
                singleton->collisionHandler();
                singleton->pacman0->decX(0.02);
                singleton->pacman0->right = false;
            }
            else
            {
                singleton->pacman0->moveRight(0.01);
            }
            singleton->collisionHandler();
            singleton->pelletCollisionHandler();
        }

        for (int i = 0; i < singleton->ghosts0->spoopy.size(); i++)
        {
            if (singleton->ghosts0->spoopy[i]->up)
            {
                singleton->ghosts0->moveUp(i, 0.01);
            }
            else if (singleton->ghosts0->spoopy[i]->down)
            {
                singleton->ghosts0->moveDown(i, 0.01);
            }
            else if (singleton->ghosts0->spoopy[i]->left)
            {
                singleton->ghosts0->moveLeft(i, 0.01);
            }
            else
            {
                singleton->ghosts0->moveRight(i, 0.01);
            }
        }
        singleton->advanceAllAnimations();
        glutTimerFunc(50, app_timer, val);
    }
    else
    {
        if (singleton->pacman0->done() && singleton->pacman0->dead)
        {
            singleton->gameOverText->animate();
            glutTimerFunc(250, app_timer, val);
        }
        else if (!singleton->pacman0->done() && singleton->pacman0->dead)
        {
            glutTimerFunc(150, app_timer, val);
        }
        else //gamewon
        {
            singleton->youWinText->animate();
            singleton->stopAllAnimations();
            singleton->pacman0->stop();
            glutTimerFunc(250, app_timer, val);
        }
    }
}

void random_number_generator(int val)
{
    if (!singleton->pacman0->dead && !singleton->paused)
    {
        for (int i = 0; i < singleton->ghosts0->spoopy.size(); i++)
        {
            singleton->ghostMovement[i] = rand() % 4; //generate random number for each ghost from 0-3, each one representing a direction
                                                      /* 0 is up, 1 is down, 2 is left, 3 is right */
        }
        for (int i = 0; i < singleton->ghosts0->spoopy.size(); i++)
        {
            singleton->ghosts0->changeDirection(i, singleton->ghostMovement[i]);
        }
        glutTimerFunc(2000, random_number_generator, val);
    }
}

game::game()
{
    srand(time(NULL)); //seed for random
    singleton = this;
    paused = false;
    pacmanWin = false;
    background = new TexRect("images/black.png", -1, 1, 2, 2);
    board0 = new gameBoard();

    pacman_logo = new TexRect("BMPs/other/pacman_logo.png", -0.625, 1.0, 1.25, 0.1);

    if (doesFileExist("pacsave.txt"))
    {
        std::ifstream saveFile;
        saveFile.open("pacsave.txt");

        vector<string> fileInputs;
        string buffer;

        while (saveFile >> buffer)
        {
            fileInputs.push_back(buffer);
        }

        saveFile.close();

        float px, py, blinky_x, blinky_y, pinky_x, pinky_y, inky_x, inky_y, clyde_x, clyde_y, rufus_x, rufus_y;

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
        rufus_x = atof(fileInputs[15].c_str());
        rufus_y = atof(fileInputs[16].c_str());

        pacman0 = new pacman((fileInputs[0]).c_str(), px, py, pleft, pright, pup, pdown);
        ghosts0 = new populateGhosts(blinky_x, blinky_y, pinky_x, pinky_y, inky_x, inky_y, clyde_x, clyde_y, rufus_x, rufus_y); //no need to determine where ghosts are going or loading textures here, because it gets randomly generated in a few lines
        gameOverText = new AnimatedRect("images/game_over.png", 7, 1, -0.5, 0.5, 1, 1);
        youWinText = new AnimatedRect("images/you_win.png", 6, 1, -0.5, 0.5, 1, 1);
        pellets0 = new populatePellets(); //saving comes at the cost of having to get all the pellets again

        vector<bool> pelletEaten;
        bool temp;

        for (int i = 17; i < fileInputs.size(); i++)
        {
            temp = toBool(fileInputs[i]);
            pelletEaten.push_back(temp);
        }

        for (int i = 0; i < pellets0->pelletStuff.size(); i++)
        {
            pellets0->pelletStuff[i]->changeBeenEaten(pelletEaten[i]);
        }
    }

    else
    {
        pellets0 = new populatePellets();
        ghosts0 = new populateGhosts();
        pacman0 = new pacman();

        gameOverText = new AnimatedRect("images/game_over.png", 7, 1, -0.5, 0.5, 1, 1);
        youWinText = new AnimatedRect("images/you_win.png", 6, 1, -0.5, 0.5, 1, 1);
    }

    random_number_generator(1);
    app_timer(2);
}

bool game::toBool(string const &s)
{
    return s != "0";
}

bool game::doesFileExist(const char *fileName)
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
    gameOverText->draw();
    youWinText->draw();
}

void game::advanceAllAnimations()
{
    pacman0->advance();
    ghosts0->advanceAllGhostsAnimation();
}

void game::stopAllAnimations()
{
    ghosts0->stopAllGhostsAnimation();
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

    if (key == '`')
    { // ` key
        // Save and exit the app when ` key is pressed

        ofstream writeSaveFile;
        writeSaveFile.open("pacsave.txt");

        string pacman_filename;
        pacman_filename = "BMPs/pacman/pacman_";

        if (pacman0->left)
            pacman_filename += "left.png";
        else if (pacman0->right)
            pacman_filename += "right.png";
        else if (pacman0->up)
            pacman_filename += "up.png";
        else
            pacman_filename += "down.png";

        writeSaveFile << pacman_filename << " " << pacman0->getX() << " " << pacman0->getY() << " " << pacman0->left << " " << pacman0->right << " " << pacman0->up << " " << pacman0->down << " ";
        writeSaveFile << ghosts0->spoopy[0]->getX() << " " << ghosts0->spoopy[0]->getY() << " ";
        writeSaveFile << ghosts0->spoopy[1]->getX() << " " << ghosts0->spoopy[1]->getY() << " ";
        writeSaveFile << ghosts0->spoopy[2]->getX() << " " << ghosts0->spoopy[2]->getY() << " ";
        writeSaveFile << ghosts0->spoopy[3]->getX() << " " << ghosts0->spoopy[3]->getY() << " ";
        writeSaveFile << ghosts0->spoopy[4]->getX() << " " << ghosts0->spoopy[4]->getY() << " ";

        for (int i = 0; i < pellets0->pelletStuff.size(); i++)
        {
            writeSaveFile << pellets0->pelletStuff[i]->getHasBeenEaten() << " ";
        }

        writeSaveFile.close();

        exit(0);
    }

    if (key == ' ')
    { // restart game??
        delete board0;
        delete pellets0;
        delete ghosts0;
        delete pacman0;
        board0 = new gameBoard();
        pellets0 = new populatePellets();
        ghosts0 = new populateGhosts();
        pacman0 = new pacman();
        paused = false;
        pacmanWin = false;
        delete youWinText;
        delete gameOverText;
        gameOverText = new AnimatedRect("images/game_over.png", 7, 1, -0.5, 0.5, 1, 1);
        youWinText = new AnimatedRect("images/you_win.png", 6, 1, -0.5, 0.5, 1, 1);
        gameOverText->draw();
        youWinText->draw();

        random_number_generator(1);
    }

    if (key == 'p')
    {
        paused = !paused;
    }

    else //because really you can only move pacman
    {
        if (!pacman0->dead && !pacmanWin)
            pacman0->changeDirection(key);
    }
}

void game::specialKeyHandler(int key)
{
    if (!pacman0->dead && !pacmanWin)
        pacman0->changeDirection(key); //because we only worry about the left, right, down, up special keys, meaning it just affects pacman
}

bool game::gameWon()
{
    bool win = false;
    if (!pacman0->dead)
    {
        int count = 0;
        for (int i = 0; i < pellets0->pelletStuff.size(); i++)
        {
            if (pellets0->pelletStuff[i]->getHasBeenEaten())
            {
                count++;
            }
        }
        if (count == pellets0->pelletStuff.size())
        {
            win = true;
        }
    }
    return win;
}

bool game::inRange(float min0, float max0, float min1, float max1)
{
    return max(min0, max0) >= min(min1, max1) && min(min0, max0) <= max(min1, max1);
}

void game::collisionHandler()
{
    for (int i = 0; i < ghosts0->spoopy.size(); i++)
    {
        if (inRange(ghosts0->spoopy[i]->getX(), ghosts0->spoopy[i]->getX() + ghosts0->spoopy[i]->getW(), pacman0->getX(), pacman0->getX() + pacman0->getW()) && inRange(ghosts0->spoopy[i]->getY(), ghosts0->spoopy[i]->getY() + ghosts0->spoopy[i]->getY() + ghosts0->spoopy[i]->getH(), pacman0->getY(), pacman0->getY() + pacman0->getH()))
        {
            pacman0->die();
        }
    }
}

void game::pelletCollisionHandler()
{
    for (int i = 0; i < pellets0->pelletStuff.size(); i++)
    {
        if (inRange(pellets0->pelletStuff[i]->getX(), pellets0->pelletStuff[i]->getX() + pellets0->pelletStuff[i]->getW(), pacman0->getX(), pacman0->getX() + pacman0->getW()) && inRange(pellets0->pelletStuff[i]->getY(), pellets0->pelletStuff[i]->getY() + pellets0->pelletStuff[i]->getH(), pacman0->getY(), pacman0->getY() + pacman0->getH()))
        {
            pellets0->pelletStuff[i]->changeBeenEaten();
        }
    }
}

bool game::wallCollisionHandler()
{
    bool collision = false;
    for (int i = 0; i < board0->blocks.size(); i++)
    {
        if (inRange(board0->blocks[i]->getX(), board0->blocks[i]->getX() + board0->blocks[i]->getW(), pacman0->getX(), pacman0->getX() + pacman0->getW()) && inRange(board0->blocks[i]->getY(), board0->blocks[i]->getY() - board0->blocks[i]->getH(), pacman0->getY(), pacman0->getY() - pacman0->getH()))
        {
            collision = !collision;
        }
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
