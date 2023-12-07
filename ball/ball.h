/*
Authors: Briel F., Sterling M., Andrew M., Cameron H., Daniel E.
Assignment Title: Group project: Falling Balls
Assignment Description:
Due Date: 12/6/23
Date Created: 11/28/23
Date Last Modified: 12/6/23
 */
#ifndef BALL_H_
#define BALL_H_
#include <cmath>
#include "../SDL_Plotter/SDL_Plotter.h"
#include "../Force/Force.h"
#include "../Force/constants.h"
#include "../point.h"

using namespace std;



class Ball {
private:
    // location
    Point loc;

    // previous location
    Point prevLoc;

    // color
    color _color;

    // radius
    int radius;
    force f;

public:
    Ball();

    void setColor(color);
    void setLoc(Point);
    void setPrevLoc(Point);
    void setRadius(int);
    void setForce(force);

    color getColor() const;
    const Point getLoc() const;
    const Point getPrevLoc() const;
    const int getRadius() const;
    const force getForce() const;

    void display(SDL_Plotter&, bool = false);
    void move();

};


#endif //BALL_H_