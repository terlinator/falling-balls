  void block::createBlock(){

  }
  void drawBlock(point loc, int size, color c, SDL_Plotter& g);

  void setBlockValue(int val);
  int getBlockValue();

  vector<point> getEdge();
  
  bool collisionCheck(point);
  
