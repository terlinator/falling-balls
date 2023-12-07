//Group Twelve Names: Daniel Esquivel, Briel Finley,
//Cameron Hardin, Sterling Matthews, Andrew Meador
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
/*
 * description: sets the color ofthe ball
 * return: void
 * precondition: color is valid
 * postcondition: sets the color of the ball to the given value
 *
*/
        void setColor(color);
/*
 * description: sets the balls location
 * return: void
 * precondition: Point is valid
 * postcondition: sets the current location of the ball
 *
*/
        void setLoc(Point);
/*
 * description: sets the previous location
 * return: void
 * precondition: Point is valid
 * postcondition: sets the pravious location of the ball
 *
*/
        void setPrevLoc(Point);
/*
 * description: sets the radius of the ball
 * return: void
 * precondition: int is valid
 * postcondition: sets the radius ofthe ball
 *
*/
        void setRadius(int);
/*
 * description: sets the force of the ball
 * return: void
 * precondition: force is valid
 * postcondition: makes the force of the ball the given value
 *
*/
        void setForce(force);
/*
 * description: gets the color of the ball
 * return: color
 * precondition: the ball exists
 * postcondition: returns the color of the ball
 *
*/
        color getColor() const;
/*
 * description: gets the location of the ball
 * return: Point
 * precondition: the ball exists
 * postcondition: returns the point the ball is at
 *
*/
        const Point getLoc() const;
/*
 * description: gets the previous location of the ball
 * return: Point
 * precondition: The ball had a previous location
 * postcondition: returns a const Point type
 *
*/
        const Point getPrevLoc() const;
/*
 * description: gets the radius of the ball
 * return: int
 * precondition: The ball exists
 * postcondition: returns a const int type for the radius
 *
*/
        const int getRadius() const;
/*
 * description: gets the force on the block
 * return: force
 * precondition: the ball exists
 * postcondition: returns a const force type
 *
*/
        const force getForce() const;
/*
 * description: displays the block
 * return: void
 * precondition:  the bool given is valid
 * postcondition: prints the ball to the screen
 *
*/
        void display(SDL_Plotter&, bool = false);
/*
 * description: move the ball
 * return: void
 * precondition: the ball is drawn
 * postcondition: move the ball
 *
*/
        void move();

};

#endif // BALL_H_INCLUDED

