/*  Cam - 5:45 12/3/23
*/
#include "Triangle.h"

Triangle() {
  this->loc.x = 80;
  this->loc.y = 80;

  this->health = 1;
  this->sideLength = 10;
  this->color = Color(0,0,0);
}

Triangle(Point, int, Color);

int Triangle::getHealth() const {
  return this->health;
}

void Triangle::setHealth(int value) {
  this->health = value;
}

vector<Point> Triangle::getPoints() const {
  return this->points; //Points is a private vector of points in .h
}

void Triangle::setPoints(vector<Point> vec) {
  this->points = vec;
}

void Triangle::drawTriangle(Point loc, int size, Color c, SDL_Plotter& g) {
  //plotPixel(p.x,  p.y,  r,  g,  b)

  //This is block
  int xleft = 0;
  int xright = 0;
  int y = 0;
  
  for(int i = 0; i < size/2; i++){   //loops through xs (half side)
    for(int j = size; j > 0; j--){   //how far away (columns)
      xleft = (getLocation().x)-i;   //x plus or minus distance
      xright = (getLocation().x)+i;  //x plus or minus distance
      y = (getLocation().y)+j;
      g.plotPixel(xleft,y,color.R,color.G,color.B);  //Left side
      g.plotPixel(xright,y,color.R,color.G,color.B); //Right side
    }
  }
}

