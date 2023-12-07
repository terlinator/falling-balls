////Group Twelve Names: Daniel Esquivel, Briel Finley,
////	Cameron Hardin, Sterling Matthews, Andrew Meador
////Project Name: Falling Balls
////Assignment Description: Create a circle definitions
////File Name: Circle.cpp
////File Created: 12/5/2023
////File Last Edited: 12/05/2023
//#include "Circle.h"
//#include "../Blocks/Blocks.h"
//
////Constructors
//Circle::Circle(){
//    this->loc.x = 80;
//    this->loc.y = 80;
//
//    this->health = 1;
//    this->radius = 10;
//    this->_color = color(0,0,0);
//}
//
//Circle::Circle(Point p, int radius, int health, color c) {
//this->loc.x = p.x;
//this->loc.y = p.y;
//
//this->radius = radius;
//this->health = health;
//this->_color = color(c.R,c.G,c.B);
//}
//
////Location Functions
//Point Circle::getLoc() const {
//    return this->loc;
//}
//
//void Circle::setLoc(Point p) {
//    this->loc = p;
//}
//
////Side Functions
//int Circle::getRadius() const{
//    return this->radius;
//}
//
//void Circle::setRadius(int x) {
//    this->radius = x;
//}
//
////Health Functions
//int Circle::getHealth() const {
//    return this->health;
//}
//
//void Circle::setHealth(int value) {
//    this->health = value;
//}
//
////Plots an already constructed circle given a plotter
//void Circle::drawCircle(SDL_Plotter& g) {
//    int radius = getRadius();
//    for (int x = -radius; x <= radius; x++) {
//        for (int y = -radius; y <= radius; y++) {
//            if (sqrt(pow(x, 2) + pow(y, 2)) <= radius) {
//                g.plotPixel(x + origin.x, y + origin.y, c.R, c.G, c.B);
//            }
//        }
//    }
//}
//
//bool Circle::collisionCheck(const Ball& ball) {
//    double ballX = ball.getLoc().x;
//    double ballY = ball.getLoc().y;
//
//    double circleX = getLoc().x;
//    double circleY = getLoc().y;
//
//    //Find distance between the centers of the balls
//    double distance = sqrt(pow(ballX - circleX, 2) + pow(ballY - circleY, 2));
//
//    //Check if the distance <= to ball radius + 1/2 triangle side
//    return distance <= (ball.getRadius() + getRadius() / 2.0);
//}

//Group Twelve Names: Daniel Esquivel, Briel Finley,
//    Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create a circle definitions
//File Name: Circle.cpp
//File Created: 12/5/2023
//File Last Edited: 12/05/2023
#include "Circle.h"
#include "point.h"
#include "SDL_Plotter/SDL_Plotter.h"

//Constructors
Circle::Circle() {
  this->loc.x = 80;
  this->loc.y = 80;

  this->health = 1;
  this->radius = 10;
  this->color1 = color(0,0,0);
}

Circle::Circle(point p, int radius, int health, color c) {
  this->loc.x = p.x;
  this->loc.y = p.y;

  this->radius = radius;
  this->health = health;
  this->color1 = color(c.R,c.G,c.B);
}

//Location Functions
Point Circle::getLoc() const {
  return this->loc;
}

void Circle::setLoc(Point p) {
  this->loc = p;
}

//Side Functions
int Circle::getRadius() const{
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

//Plots an already constructed circle given a plotter
void Circle::drawCircle(SDL_Plotter& g) {
    int radius = getRadius();
    for (int x = -radius; x <= radius; x++) {
        for (int y = -radius; y <= radius; y++) {
            if (sqrt(pow(x, 2) + pow(y, 2)) <= radius) {
                g.plotPixel(x + getLoc().x, y + getLoc().y, color1.R, color1.G, color1.B);
            }
        }
    }
}

bool Circle::collisionCheck(const Ball& ball) {
    double ballX = ball.getLoc().x;
    double ballY = ball.getLoc().y;

    double circleX = getLoc().x;
    double circleY = getLoc().y;

    //Find distance between the centers of the balls
    double distance = sqrt(pow(ballX - circleX, 2) + pow(ballY - circleY, 2));

    //Check if the distance <= to ball radius + 1/2 triangle side
    return distance <= (ball.getRadius() + getRadius() / 2.0);
}
