//Cam
#include "Circle.h"

//Constructors
Circle() {
  this->loc.x = 80;
  this->loc.y = 80;

  this->health = 1;
  this->radius = 10;
  this->color = Color(0,0,0);
}

Circle(Point p, int radius, int health, Color c) {
  this->loc.x = p.x;
  this->loc.y = p.y;

  this->radius = radius;
  this->health = health;
  this->color = Color(c.R,c.G,c.B);
}

//Location Functions
Point Circle::getLoc() const {
  return this->loc;
}

void Circle::setLoc(Point p) {
  this->loc = p;
}

//Side Functions
int Circle::getRadius() {
  return this->radius;
}

void Circle::setRadius(int x) {
  this->radius = x;
}

//Health Functions
int Circle::getHealth() const {
  return this->health;
}

void Circle::setHealth(int value) {
  this->health = value;
}

//Plots an already constructed triangle given a plotter
void Circle::drawCircle(const Triangle& t, SDL_Plotter& g) {
    int size = t.getSide();
    Point loc = t.getLoc();

    //Take from ball
}

bool collisionCheck(const Ball& ball) {
    double ballX = ball.getLoc().x;
    double ballY = ball.getLoc().y;

    double circleX = getLoc().x;
    double circleY = getLoc().y;

    //Find distance between the centers of the balls
    double distance = sqrt(pow(ballX - circleX, 2) + pow(ballY - circleY, 2));

    //Check if the distance <= to ball radius + 1/2 triangle side
    return distance <= (ball.getRadius() + getRadius() / 2.0);
}
