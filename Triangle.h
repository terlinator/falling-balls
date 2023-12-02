/* Cam - 12/1/23 4:30
*/
#include Point.h
#include Color.h

const int SIZE;

#ifndef Triangle_h
#define Triangle_h

struct Triangle {

  private:
  vector<Point> points;
  Point origin;
  int health;
  
  public:
  Color color;

  TriangleTriangle(const Triangle& t){
       *this = t;
  }
  Triangle(Point,int,int,int,int){
       *this = t;
  }

  void drawTriangle(point loc, int size, color c, SDL_Plotter& g);
  vector<Point> getEdge();
  int getHealth() const;  // Getter function declaration
  void setHealth(int);
  vector<Point> getPoints() const;
  void setPoints(int[SIZE]);
}



#endif /* Triangle_h */
