#include "ball.h"
#include "constants.h"

using namespace std;

Ball::Ball() {

    loc.x = 80;
    loc.y = 80;

    _color.R = 255;
    _color.G = 255;
    _color.B = 255;

    radius = 25;
    f.setDirection(PI / 2);
    f.setMagnitude(0);
}

void Ball::setColor(color c) {
    _color = c;
}

void Ball::setLocation(point p){
    loc = p;
}
void Ball::setRadius(int r) {
    radius = r;
}

color Ball::getColor() const{
    return _color;
}
const point Ball::getLocation() const{
    return loc;
}
const int Ball::getRadius() const {
    return radius;
}

void Ball::display(SDL_Plotter& g, bool ERASE) {
    color c = _color;
    if (ERASE) {
        c.R = 255;
        c.G = 25;
        c.B = 25;
    }
    for (int x = -radius; x <= radius; x++) {
        for (int y = -radius; y <= radius; y++) {
            if (sqrt(pow(x, 2) + pow(y, 2)) <= radius) {
                g.plotPixel(x + loc.x, y + loc.y, c);
            }
        }
    }
}
void Ball::move() {
    loc.x += f.getMagnitude() * cos(f.getDirection());
    loc.y += f.getMagnitude() * sin(f.getDirection());
    f.apply(GRAVITY);
    if(loc.y >= (SCREEN_SIZE_HEIGHT + radius)) {
        f.setDirection((3 * PI) / 2);
        f.setMagnitude(0.5* f.getMagnitude());
    }
    if((loc.x >= (SCREEN_SIZE_WIDTH + radius)) || (loc.x < radius)) {
        f.setDirection((3 * PI) / 2);
        f.setMagnitude(0.5* f.getMagnitude());
    }
        


}
