//Group Twelve Names: Daniel Esquivel, Briel Finley,
//    Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create a triangle header
//File Name: Circle.h
//File Created: 12/5/2023
//File Last Edited: 12/05/2023

#ifndef CIRCLE_H_
#define CIRCLE_H_

#include "SDL_Plotter.hpp"
#include "Point.h"
#include "ball.h"

class Circle{
  private:
  Point loc;
  int health;
  int radius;
  color color1;

  public:
  Circle();

  Circle(Point, int, int, color); //Loc, radius, health, color
/*
 * description: draws a Circle
 * return: void
 * precondition: the circle exists
 * postcondition: returns nothing
 *
*/
  void drawCircle(SDL_Plotter&);
/*
 * description: gets the location of the circle
 * return:   point
 * precondition:  the circle exists
 * postcondition:   returns the point of the circle
 *
*/
  Point getLoc() const;
/*
 * description: sets the location of the circle
 * return:  void
 * precondition:  the point given is valid
 * postcondition:  sets the location of the circle to point x
 *
*/
  void setLoc(Point x);
/*
 * description: gets the radius of the circle
 * return: int
 * precondition: radius is valid
 * postcondition: returns an int
 *
*/
  int getRadius() const;
/*
 * description: sets the radius of the circle
 * return: void
 * precondition: the data provided is valid
 * postcondition: sets the radius
 *
*/
  void setRadius(int x);
/*
 * description: gets the health of the returns
 * return: int
 * precondition: the ball is valid
 * postcondition: returns an int
 *
*/
  int getHealth() const;
/*
 * description:   sets the ball health
 * return:   void
 * precondition:  the ball exists
 * postcondition: the ball's health value is set
 *
*/
  void setHealth(int val);
/*
 * description: checks if the ball is colliding
 * return: bool
 * precondition: the ball exists
 * postcondition: returns true or false
 *
*/
  bool collisionCheck(const Ball&);
};

#endif //Circle_h
