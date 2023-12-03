#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "SDL_Plotter/SDL_Plotter.h"
#include "ball/ball.h"

class Triangle{
  private:
  Point loc;
  vector<Point> points;
  int health;
  int sideLength;
  Color color;

  public:
  Triangle();
  Triangle(Point, int, Color);
  void drawTriangle(point loc, int size, color c, SDL_Plotter& g);

  Point getLocation();
  void setLocation(point x);

  int getSide();
  void setSide(int x);

  int getHealth();
  void setHealth(int val);

  bool collisionCheck(Ball circle);  
};

#endif //Triangle_h
