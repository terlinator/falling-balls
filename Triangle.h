//Group Twelve Names: Daniel Esquivel, Briel Finley,
//	Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create a triangle header
//File Name: Triangle.h
//File Created: 11/14/2023
//File Last Edited: 12/05/2023
#ifndef TRIANGLE_H_INCLUDED
#define TRIANGLE_H_INCLUDED

#include "SDL_Plotter.h"
//#include "ball.h"
#include "point.h"

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
 * description: 
 * return:   point
 * precondition:  the circle exists                
 * postcondition:   returns the point of the circle
 *                                                        
*/
  void drawTriangle(SDL1_Plotter&);
/*
 * description: gets the location of the circle
 * return:   point
 * precondition:  the circle exists                
 * postcondition:   returns the point of the circle
 *                                                        
*/
  Point getLoc() const;
/*
 * description: gets the location of the circle
 * return:   point
 * precondition:  the circle exists                
 * postcondition:   returns the point of the circle
 *                                                        
*/
  void setLoc(Point x);
/*
 * description: gets the location of the circle
 * return:   point
 * precondition:  the circle exists                
 * postcondition:   returns the point of the circle
 *                                                        
*/
  int getSide() const;
/*
 * description: gets the location of the circle
 * return:   point
 * precondition:  the circle exists                
 * postcondition:   returns the point of the circle
 *                                                        
*/
  void setSide(int x);
/*
 * description: gets the location of the circle
 * return:   point
 * precondition:  the circle exists                
 * postcondition:   returns the point of the circle
 *                                                        
*/
  int getHealth() const;
/*
 * description: gets the location of the circle
 * return:   point
 * precondition:  the circle exists                
 * postcondition:   returns the point of the circle
 *                                                        
*/
  void setHealth(int val);

  //bool collisionCheck(const Ball&);
};

#endif // TRIANGLE_H_INCLUDED
