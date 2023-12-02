struct Color { 
  int R, G, B;
  Color(const color color){
    this->color;
  }
  Color(int R=0, int G = 0, int B = 0){
    this->R = R;
    this->G = G;
    this->B = B;
  }
  Color operator= (const color color){
    R = color.R;
    G = color.G;
    B = color.B;
  }
}

void block::createBlock(){
    R = 0;
    G = 0;
    B = 0;
    loc.x = 0;
    loc.y = 0;
    size = 10;
  }

  void drawBlock(point loc, int size, color r, SDL_Plotter& g){
    for(int i = -size/2; i < size/2; i++){
      for(int j = -size/2; k < size/2; j++){
        g.plotPixel(i,j,R,G,B);
      }
    }
  }

  void block::setBlockValue(int val){
    health = val;
  }

  int block::getBlockValue(){
    return health;
  }

  square block::getEdge(){
    vector<vector <point> > edges;
    for(int i = 0; i < square.size(); i++){
      int min = square(0);
      if(square(i) < min){
        min = square(i);
      }
      int max = square(0);
      if(square(i) > max){
        max = square(i);
      }

  }
  
  bool block::collisionCheck(point){
    if 
  }
  
