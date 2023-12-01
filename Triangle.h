/* Cam - 12/1/23 4:30
*/
#include Point.h
#include Color.h

const SIZE;

#ifndef Triangle_h
#define Triangle_h

struct Triangle {

  private:
  Point triangle[SIZE];
  Point origin();
  int health;
  
  public:
  Triangle(const Triangle& t){
       *this = t;
  }
  Triangle(Point,int,int,int,int){
       *this = t;
   }

  void drawTriangle(point loc, int size, color c, SDL_Plotter& g);
  vector<Point> getEdge();
  
  int getHealth();
  int setHealth();
  
}



#endif /* Triangle_h */
