//Group Twelve Names: Daniel Esquivel, Briel Finley,
//    Cameron Hardin, Sterling Matthews, Andrew Meador
//Project Name: Falling Balls
//Assignment Description: Create a circle definitions
//File Name: Blocks.h
//File Created: 12/2/2023
//File Last Edited: 12/06/2023
#ifndef BLOCK_H_INCLUDED
#define BLOCK_H_INCLUDED

#include "SDL_Plotter.hpp"
#include "ball.h"
#include "Point.h"

class Block{
  private:
  Point loc;
  int sideLength;
  int health;
  color color1;

  public:
  Block();
  Block(Point, int, int, color); //Loc, sideLength, health, color
  /*
 * description: draw the block
 * return: void
 * precondition: SDL plotter works
 * postcondition: draws the block
 *
*/
  void drawBlock(SDL_Plotter&);
/*
 * description: gets the location
 * return: point
 * precondition: the block exists
 * postcondition: gives the point of the block in x,y
 *
*/
  Point getLoc() const;
/*
 * description: sets the location ofthe block
 * return: void
 * precondition: given a valid point
 * postcondition: will set the block's location
 *
*/
  void setLoc(Point x);
/*
 * description: gets the side length of the block
 * return: int
 * precondition: the block exists
 * postcondition: returns the size of the square
 *
*/
  int getSide() const;
/*
 * description: sets the blocks side length
 * return: void
 * precondition: the block exists
 * postcondition: sets the blocks SIZE
 *
*/
  void setSide(int x);
/*
 * description: gets the blocks health
 * return: int
 * precondition: the block health is over 0
 * postcondition: the health is returned
 *
*/
  int getHealth() const;
/*
 * description: sets the block's health
 * return: void
 * precondition: the block exists
 * postcondition: sets the health of the block
 *
*/
  void setHealth(int val);

  bool collisionCheck(const Ball&);
};

#endif // BLOCK_H_INCLUDED
