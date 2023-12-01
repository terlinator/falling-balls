/* Cam - 12/1/23 4:30
*/
#include Point.h

const SIZE;

#ifndef Triangle_h
#define Triangle_h

struct Triangle {

  private:
  Point triangle[SIZE];
  int health;
  
  public:
  Triangle(const Point& p){
       *this = p;
   }

  void drawTriangle(point loc, int size, color c, SDL_Plotter& g);
  vector<Point> getEdge();
  
  int getHealth();
  int setHealth();
}



#endif /* Triangle_h */
