

#include "blocks.h"
#include "Point.h"
#include "SDL_Plotter/SDL_Plotter.h"
#include "ball/ ball.h"
//#include the sdl plotter

Block::Block() {
  this->loc.x = 80;
  this->loc.y = 80;

  this->health = 1;
  this->sideLength = 10;
  this->color1 = color(0,0,0);
}

Block::Block(Point p, int size, int health, color c) {
  this->loc.x = p.x;
  this->loc.y = p.y;

  this->sideLength = size;
  this->health = health;
  this->color1 = color(c.R,c.G,c.B);
}

//Location Functions
Point Block::getLoc() const {
  return this->loc;
}

void Block::setLoc(Point p) {
  this->loc = p;
}

//Side Functions
int Block::getSide() const{
  return this->sideLength;
}

void Block::setSide(int x) {
  this->sideLength = x;
}

//Health Functions
int Block::getHealth() const {
  return this->health;
}

void Block::setHealth(int value) {
  this->health = value;
}

void Block::drawBlock(SDL_Plotter& g) {
    //plotPixel(p.x,  p.y,  r,  g,  b)
    Point p = getLoc();
    int squareX, squareY;
    int R = color1.R;
    int G = color1.G;
    int B = color1.B;
    int sidelength = getSide();

    for (int i = -sideLength / 2; i < sidelength / 2; i++) {
        //how far away (rows)
        for (int j = -sidelength / 2; j < sidelength / 2; j++) {
            //how far away (columns)
            squareX = (p.x) - i; //x plus or minus distance
            squareY = (p.y) - j; //y plus or minus distance
            g.plotPixel(squareX, squareY, R, G, B);
        }
    }
}



bool Block::collisionCheck(const Ball& circle) {
    // Calculate the distance between the centers of the ball and the block
    double distanceX = abs(circle.getLoc().x - this->getLoc().x);
    double distanceY = abs(circle.getLoc().y - this->getLoc().y);

    // Ensure the ball is within the x and y bounds of the block
    if (distanceX > (sideLength / 2 + circle.getRadius())) {
        return false;
    }
    if (distanceY > (sideLength / 2 + circle.getRadius())) {
        return false;
    }

    // Check if the ball is within the diagonal bounds of the block
    if (distanceX <= (sideLength / 2)) {
        return true;
    }
    if (distanceY <= (sideLength / 2)) {
        return true;
    }

    // Check if the ball is within the corner bounds of the block
    double cornerDistance = pow(distanceX - sideLength / 2, 2) + pow(distanceY - sideLength / 2, 2);
    return cornerDistance <= pow(circle.getRadius(), 2);
}

