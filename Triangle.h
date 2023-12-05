//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create a triangle header
//File Name: Triangle.h
//File Created: 11/14/2023
//File Last Edited: 12/05/2023
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
