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
  void drawCircle(const Triangle&, SDL_Plotter&);

  Point getLocation();
  void setLocation(point x);

  int getRadius();
  void setRadius(int x);

  int getHealth();
  void setHealth(int val);

  bool collisionCheck(const Ball&);
};

#endif //Circle_h
