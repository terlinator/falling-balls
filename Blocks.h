#ifndef BLOCKS_H_
#define BLOCKS_H_

class block(){
  private:
  int x, y;
  
  public:
  void createBlock();
  void createBlock(int x, int y);

  void moveBlock(int x, int y);

  void setBlockValue(int val);
  int getBlockValue();

  
};

#endif //BLOCK_H_
