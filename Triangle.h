#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "SDL_Plotter/SDL_Plotter.h"
#include "ball/ball.h"

class Triangle{
  private:
  Point loc;
  int health;
  int sideLength;
  color color;

  public:
  Triangle();
  Triangle(Point, int, int, color); //Loc, size, health, color
  void drawTriangle(SDL_Plotter&);

  Point getLocation() const;
  void setLocation(point x);

  int getSide() const;
  void setSide(int x);

  int getHealth() const;
  void setHealth(int val);

  bool collisionCheck(const Ball&);
};

#endif //Triangle_h
