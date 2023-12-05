#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "SDL_Plotter/SDL_Plotter.h"
#include "ball/ball.h"

class Triangle{
  private:
  Point loc;
  int health;
  int sideLength;
  Color color;

  public:
  Triangle();
  Triangle(Point, int, int, Color); //Loc, size, health, color
  void drawTriangle(SDL_Plotter&);

  Point getLocation();
  void setLocation(point x);

  int getSide();
  void setSide(int x);

  int getHealth();
  void setHealth(int val);

  bool collisionCheck(const Ball&);
};

#endif //Triangle_h
