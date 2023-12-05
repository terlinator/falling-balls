#ifndef BLOCK_H_INCLUDED
#define BLOCK_H_INCLUDED

#include "SDL_Plotter.h"
//#include "ball.h"
#include "point.h"

class Block{
  private:
  Point loc;
  int sideLength;
  int health;
  color color1;

  public:
  Block();
  Block(Point, int, int, color); //Loc, sideLength, health, color
  void drawBlock(SDL_Plotter&);

  Point getLoc() const;
  void setLoc(Point x);

  int getSide() const;
  void setSide(int x);

  int getHealth() const;
  void setHealth(int val);

  //bool collisionCheck(const Ball&);
};

#endif // BLOCK_H_INCLUDED
