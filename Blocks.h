#ifndef BLOCKS_H_
#define BLOCKS_H_
#include "SDL_Plotter/SDL_Plotter.h"
#include "ball/ball.h"

class Block{
  private:
  point loc;
  std::vector<point> square;
  int health;
  Color colorType;
  int sideLength;

  public:

  Block();
  void createBlock();
  void drawBlock(point loc, int size, color c, SDL_Plotter& g);

  Point getLocation();
  void setLocation(point x);

  int getSide();
  void setSide(int x);

  int getBlockValue();
  void setBlockValue(int val);

  bool collisionCheck(Ball circle);
  vector<point> getEdge(vector<vector<point>> edges);
  

  
};

#endif //BLOCKS_H_
