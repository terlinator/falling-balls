#ifndef BLOCKS_H_
#define BLOCKS_H_

class block(){
  private:
  int x, y;
  
  public:
  void createBlock();
  void drawBlock(point loc, int size, color c, SDL_Plotter& g);


  void moveBlock(int x, int y);

  void setBlockValue(int val);
  int getBlockValue();

  
};

#endif //BLOCK_H_
