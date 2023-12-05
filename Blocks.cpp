

#include "Blocks.h"
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
    int R = c.R;
    int G = c.G;
    int B = c.B;

    for (int i = -sidelength / 2; i < sidelength / 2; i++) {
        //how far away (rows)
        for (int j = -sidelength / 2; j < sidelength / 2; j++) {
            //how far away (columns)
            squareX = (p.x) - i; //x plus or minus distance
            squareY = (p.y) - j; //y plus or minus distance
            g.plotPixel(squareX, squareY, R, G, B);
        }
    }
}



/*bool Block::collisionCheck(Ball circle) {
    bool Tf;
    //dist = sqrt((x2 - x1)^2 + (y2 - y1)^2 )
    if(circle.getRadius() + circle.getLocation().x > ((sideLength / 2) + this->getLocation().x)) {
        Tf = true;
    }
    else if(circle.getRadius() + circle.getLocation().y > ((sideLength / 2) + this->getLocation().y)) {
        Tf = true;
    }
    else if(circle.getRadius() + circle.getLocation().x >
        ((pow(pow(sideLength/2,2) + pow(sideLength/2,2),1/2.0)))) {
        Tf = true;
    }
    else if(circle.getRadius() + circle.getLocation().y >
        ((pow(pow(sideLength/2,2) + pow(sideLength/2,2),1/2.0)))) {
        Tf = true;
        }
    else {
        Tf = false;
    }
    return Tf;
}*/
