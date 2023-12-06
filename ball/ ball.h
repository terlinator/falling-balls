//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create a ball class
//File Name: ball.h
//File Created: 11/14/2023
//File Last Edited: 12/05/2023
#ifndef BALL_H_INCLUDED
#define BALL_H_INCLUDED

#include <cmath>
#include "SDL_Plotter.h"
#include "Force.h"
#include "point.h"

using namespace std;

/*struct point_t{
    double x, y;
    point_t(){
        x = y = 0;
    }

    point_t(double x, double y){
        this->x = x;
        this->y = y;
    }
};*/

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
        void setLocation(Point);
        void setPrevLocation(Point);
        void setRadius(int);
        void setForce(force);

        color getColor() const;
        const Point getLocation() const;
        const Point getPrevLocation() const;
        const int getRadius() const;
        const force getForce() const;

        void display(SDL_Plotter&, bool = false);
        //void move();

};

#endif // BALL_H_INCLUDED
