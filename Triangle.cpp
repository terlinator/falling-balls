/*  Cam - 5:45 12/3/23
*/
#include "Triangle.h"

//Constructors
Triangle() {
  this->loc.x = 80;
  this->loc.y = 80;

  this->health = 1;
  this->sideLength = 10;
  this->color = Color(0,0,0);
}

Triangle(Point p, int size, int health, Color c) {
  this->loc.x = p.x;
  this->loc.y = p.y;

  this->sideLength = size;
  this->health = health;
  this->color = Color(c.R,c.G,c.B);
}

//Location Functions
Point Triangle::getLoc() const {
  return this->loc;
}

void Triangle::setLoc(Point p) {
  this->loc = p;
}

//Side Functions
int getSide() {
  return this->sideLength;
}

void setSide(int x) {
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
void Triangle::drawTriangle(const Triangle& t, SDL_Plotter& g) {
    int size = t.getSide();
    Point loc = t.getLoc();

    int xleft = 0;
    int xright = 0;
    int y = 0;

    for (int i = 0; i < size; i++) {          // loops through rows
        for (int j = 0; j < size * 2; j++) {  // loops through columns adjusted based on row
            xleft = loc.x + j - size;
            xright = loc.x - j + size;

            if (xleft >= loc.x - i && xleft <= loc.x + i) {
                g.plotPixel(xleft, loc.y + i, color.R, color.G, color.B);   //Left side
            }

            if (xright >= loc.x - i && xright <= loc.x + i) {
                g.plotPixel(xright, loc.y + i, color.R, color.G, color.B);  //Right side
            }
        }
    }
}

bool collisionCheck(const Ball& ball, const Triangle& triangle) {
    double ballX = ball.getLoc().x;
    double ballY = ball.getLoc().y;

    double triangleX = triangle.getLoc().x;
    double triangleY = triangle.getLoc().y;

    //Find distance between the centers of the ball and the triangle
    double distance = sqrt(pow(ballX - triangleX, 2) + pow(ballY - triangleY, 2));

    //Check if the distance <= to ball radius + 1/2 triangle side
    return distance <= (ball.getRadius() + triangle.getSide() / 2.0);
}




