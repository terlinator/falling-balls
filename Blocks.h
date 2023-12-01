#ifndef BLOCKS_H_
#define BLOCKS_H_

class block(){
  private:
  int x, y;
  point square[SIZE];
  int health;
  
  public:
  void createBlock();
  void drawBlock(point loc, int size, color c, SDL_Plotter& g);

  void setBlockValue(int val);
  int getBlockValue();

  vector<point> getEdge();
  
  bool collisionCheck(point);
  
};

#endif //BLOCK_H_
