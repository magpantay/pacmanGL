#ifndef POPULATEGHOSTS_H
#define POPULATEGHOSTS_H

class populateGhosts
{
    vector < ghosts* > spoopy;
    public:
      populateGhosts();
      void drawGhosts();
      void animateGhosts();
      void advanceAllGhostsAnimation();

      void moveUp(float);
      void moveDown(float);
      void moveRight(float);
      void moveLeft(float);

      ~populateGhosts();
};

#endif
