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

struct point_t{
    double x, y;
    point_t(){
        x = y = 0;
    }

    point_t(double x, double y){
        this->x = x;
        this->y = y;
    }
};

class Ball {
private:
    // location
    point loc;

    // color
    color _color;

    // radius
    int radius;
    force f;

public:
    Ball();

    void setColor(color);
    Point setLocation(point);
    void setRadius(int);

    color getColor() const;
    const point getLocation() const;
    const int getRadius() const;

    void display(SDL_Plotter&, bool = false);
    void move();


};


#endif //BALL_H_