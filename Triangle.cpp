//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create a triangle header
//File Name: Triangle.cpp
//File Created: 11/14/2023
//File Last Edited: 12/05/2023

#include "Triangle.h"

//Constructors
Triangle::Triangle() {
  this->loc.x = 80;
  this->loc.y = 80;

  this->health = 1;
  this->sideLength = 10;
  this->color1 = color(0,0,0);
}

Triangle::Triangle(Point p, int size, int health, color c) {
  this->loc.x = p.x;
  this->loc.y = p.y;

  this->sideLength = size;
  this->health = health;
  this->color1 = color(c.R,c.G,c.B);
}

//Location Functions
Point Triangle::getLoc() const {
  return this->loc;
}

void Triangle::setLoc(Point p) {
  this->loc = p;
}

//Side Functions
int Triangle::getSide() const{
  return this->sideLength;
}

void Triangle::setSide(int x) {
  this->sideLength = x;
}

//Health Functions
int Triangle::getHealth() const {
  return this->health;
}

void Triangle::setHealth(int value) {
  this->health = value;
}

//Plots an already constructed triangle given a plotter
void Triangle::drawTriangle(SDL_Plotter& g) {
    int size = getSide();
    Point loc = getLoc();

    int xleft = 0;
    int xright = 0;
    //int y = 0;

    for (int i = 0; i < size; i++) {          // loops through rows
        for (int j = 0; j < size * 2; j++) {  // loops through columns adjusted based on row
            xleft = loc.x + j - size;
            xright = loc.x - j + size;

            if (xleft >= loc.x - i && xleft <= loc.x + i) {
                g.plotPixel(xleft, loc.y + i, color1.R, color1.G, color1.B);   //Left side
            }

            if (xright >= loc.x - i && xright <= loc.x + i) {
                g.plotPixel(xright, loc.y + i, color1.R, color1.G, color1.B);  //Right side
            }
        }
    }
}

//Return true if current triangle and ball hit
/*bool Triangle::collisionCheck(const Ball& ball) {
    double ballX = ball.getLoc().x;
    double ballY = ball.getLoc().y;

    double triangleX = getLoc().x;
    double triangleY = getLoc().y;

    //Find distance between the centers of the ball and the triangle
    double distance = sqrt(pow(ballX - triangleX, 2) + pow(ballY - triangleY, 2));

    //Check if the distance <= to ball radius + 1/2 triangle side
    return distance <= (ball.getRadius() + getSide() / 2.0);
}
*/
