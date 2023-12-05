#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "SDL_Plotter.h"
//#include "ball.h"
#include "point.h"

class Triangle{
  private:
  Point loc;
  int health;
  int sideLength;
  color color1;

  public:
  Triangle();
  Triangle(Point, int, int, color); //Loc, size, health, color
  void drawTriangle(SDL_Plotter&);

  Point getLoc() const;
  void setLoc(Point x);

  int getSide() const;
  void setSide(int x);

  int getHealth() const;
  void setHealth(int val);

  //bool collisionCheck(const Ball&);
};

#endif // TRIANGLE_H_INCLUDED
