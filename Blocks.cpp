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
    color.r = 0;
    color.g = 0;
    color.b = 0;
    loc.x = 0;
    loc.y = 0;
    size = 10;
  }

  void drawBlock(point loc, int size, color c, SDL_Plotter& g){
    
  }

  void block::setBlockValue(int val){
    
  }

  int block::getBlockValue(){

  }

  vector<point> block::getEdge(){

  }
  
  bool block::collisionCheck(point){
    if 
  }
  
