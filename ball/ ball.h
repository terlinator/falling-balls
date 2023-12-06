//Group Twelve Names: Daniel Esquivel, Briel Finley,
//    Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create a ball class
//File Name: ball.h
//File Created: 11/14/2023
//File Last Edited: 12/05/2023
#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED

#include <cmath>
#include "SDL_Plotter.hpp"
#include "force.h"
#include "Point.h"

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

#endif // BALL_H_INCLUDED

