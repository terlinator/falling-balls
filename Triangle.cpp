/*  Cam - 5:45 12/1/23
*/
#include "Triangle.h"

void Triangle::drawTriangle(point loc, int size, color c, SDL_Plotter& g) {
}

vector<Point> Triangle::getEdge() {
}

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

