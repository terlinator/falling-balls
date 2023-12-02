/*  Cam - 5:45 12/1/23
*/
#include "Triangle.h"

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

void Triangle::drawTriangle(point origin, int size, color c, SDL_Plotter& g) {
  //plotPixel(p.x,  p.y,  r,  g,  b)
  //for square
  int squareX, squareY;
  int R = this->color.R;
  int G = this->color.G;
  int B = this->color.B;
  
  for(int i = -sidelength/2; i < idelength/2; i++){   //how far away (rows)
    for(int j = -sidelength/2; j < idelength/2; j++){ //how far away (columns)
      squareX = (origin.x)-i;  //x plus or minus distance
      squareY = (origin.y)-j;  //y plus or minus distance
      g.plotPixel(squareX,squareY,R,G,B); 
    }
  }
}

vector<Point> Triangle::getEdge() {
  
}

