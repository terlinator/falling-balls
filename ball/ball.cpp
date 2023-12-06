//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create definitions for the ball functions
//File Name: ball.cpp
//File Created: 11/14/2023
//File Last Edited: 12/05/2023
#include "ball.h"
#include "constants.h"

using namespace std;

Ball::Ball() {

    loc.x = 80;
    loc.y = 80;

    prevLoc.x = 80;
    prevLoc.y = 80;

    _color.R = 255;
    _color.G = 25;
    _color.B = 25;

    radius = 25;
    f.setDirection(PI / 2);
    f.setMagnitude(0);
}

void Ball::setColor(color c) {
    _color = c;
}

void Ball::setLocation(Point p){
    loc = p;
}
void Ball::setPrevLocation(Point p){
    prevLoc = p;
}
void Ball::setRadius(int r) {
    radius = r;
}
void Ball::setForce(force f2) {
    f.setDirection(f2.getDirection());
    f.setMagnitude(f2.getMagnitude());
}

color Ball::getColor() const{
    return _color;
}
const Point Ball::getLocation() const{
    return loc;
}
const Point Ball::getPrevLocation() const{
    return prevLoc;
}
const int Ball::getRadius() const {
    return radius;
}
const force Ball::getForce() const {
    return f;
}

void Ball::display(SDL_Plotter& g, bool ERASE) {
    color c = _color;
    if (ERASE) {
        c.R = 255;
        c.G = 255;
        c.B = 255;
    }
    for (int x = -radius; x <= radius; x++) {
        for (int y = -radius; y <= radius; y++) {
            if (sqrt(pow(x, 2) + pow(y, 2)) <= radius) {
                g.plotPixel(x + loc.x, y + loc.y, c.R, c.G, c.B);
            }
        }
    }
}
/*void Ball::move() {
    prevLoc.x += f.getMagnitude() * cos(f.getDirection());
    prevLoc.y += f.getMagnitude() * sin(f.getDirection());
    f.apply(GRAVITY);


    if(loc.y >= (SCREEN_SIZE_HEIGHT + radius)) {
        f.setDirection((3 * PI) / 2);
        f.setMagnitude(0.5* f.getMagnitude());
    }
    if((loc.x >= (SCREEN_SIZE_WIDTH + radius)) || (loc.x < radius)) {
        f.setDirection((3 * PI) / 2);
        f.setMagnitude(0.5* f.getMagnitude());
    }



}*/
