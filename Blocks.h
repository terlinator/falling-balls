#ifndef BLOCKS_H_
#define BLOCKS_H_
#include "SDL_Plotter/SDL_Plotter.h"
#include "ball/ball.h"

class block{
  private:
  point loc;
  std::vector<point> square;
  int health;
  Color colorType;
  int sideLength;

  public:
  block();
  void createBlock();
  void setSide(int x);
  void drawBlock(point loc, int size, color c, SDL_Plotter& g);
  void setLocation(point x);

  point getLocation();
  int getSideLength();
  void setBlockValue(int val);
  int getBlockValue();

  bool collisionCheck(Ball circle);
  vector<point> getEdge(vector<vector<point>> edges);
  

  
};

#endif //BLOCKS_H_
