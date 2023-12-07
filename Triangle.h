//Group Twelve Names: Daniel Esquivel, Briel Finley,
//    Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create a triangle header
//File Name: Triangle.h
//File Created: 11/14/2023
//File Last Edited: 12/05/2023

#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "SDL_Plotter.hpp"
//#include "ball.h"
#include "Point.h"

class Triangle{
  private:
  Point loc;
  int health;
  int sideLength;
  color color1;

  public:
  Triangle();
  Triangle(Point, int, int, color); //Loc, size, health, color
  /*
  *description: draws triangle to screen
  *return: point
  *precondition: the the SDL plotter is valid
  *postcondition: draws the triangle
  */
  void drawTriangle(SDL_Plotter&);

  /*
  *description: draws triangle to screen
  *return: point
  *precondition: the triangle exists
  *postcondition: returns the point of the triangle
  */
  Point getLoc() const;
/*
  *description: sets the location
  *return: void
  *precondition: the triangle exists
  *postcondition: returns the point of the circle
  */
  void setLoc(Point x);
/*
  *description: gets the side of the triangle
  *return: int
  *precondition: the the triangle is of positive size
  *postcondition: returns the side length of the triangle
  */
  int getSide() const;
/*
  *description: sets the side length of the triangle
  *return: void
  *precondition: the triangle exists
  *postcondition: the triangle's side length is set
  */
  void setSide(int x);
/*
  *description: gets the health of the triangle
  *return: int
  *precondition: the triangle hp is over 0
  *postcondition: returns the health as an int
  */
  int getHealth() const;
/*
  *description: sets the health of the triangle
  *return:void
  *precondition: the int given is over 0
  *postcondition: the triangle's health is set
  */
  void setHealth(int val);

  //bool collisionCheck(const Ball&);
};

#endif // TRIANGLE_H_INCLUDED
