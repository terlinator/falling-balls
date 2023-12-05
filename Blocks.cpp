#include "Blocks.h"
//#include the sdl plotter
block::Block() {
  this->loc.x = 80;
  this->loc.y = 80;

  this->health = 1;
  this->sideLength = 10;
  this->color = color(0,0,0);
}

void Block::drawBlock(point origin, int sidelength, color c, SDL_Plotter& g) {
    //plotPixel(p.x,  p.y,  r,  g,  b)
    //for square
    int squareX, squareY;
    int R = c.R;
    int G = c.G;
    int B = c.B;

    for (int i = -sidelength / 2; i < sidelength / 2; i++) {
        //how far away (rows)
        for (int j = -sidelength / 2; j < sidelength / 2; j++) {
            //how far away (columns)
            squareX = (origin.x) - i; //x plus or minus distance
            squareY = (origin.y) - j; //y plus or minus distance
            g.plotPixel(squareX, squareY, R, G, B);
        }
    }
}

void Block::setBlockValue(int val) {
    health = val;
}
void Block::setSide(int x) {
    sideLength = x;
}

int Block::getSideLength() {
    return sideLength;
}

point Block::getLocation() {
    return loc;
}

int Block::getBlockValue() {
    return health;
}

bool Block::collisionCheck(Ball circle) {
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
}

  
