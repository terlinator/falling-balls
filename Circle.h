//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create a triangle header
//File Name: Circle.h
//File Created: 12/5/2023
//File Last Edited: 12/05/2023

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "SDL_Plotter/SDL_Plotter.h"

class Circle{
  private:
  Point loc;
  int health;
  int radius;
  Color color;

  public:
  Circle();
  Circle(Point, int, int, Color); //Loc, radius, health, color

  void drawCircle(SDL_Plotter&);

  Point getLocation();
  void setLocation(point x);

  int getRadius();
  void setRadius(int x);

  int getHealth();
  void setHealth(int val);

  bool collisionCheck(const Ball&);
};

#endif //Circle_h
