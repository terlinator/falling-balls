/* Cam - 12/1/23 5:33 */

#ifndef COLOR_H_
#define COLOR_H_

struct Color {
  int R, G, B;

  Color(const Color& color) {
    *this = color;
  }

  //Color name(R,G,B) constructor;
  Color(int R = 0, int G = 0, int B = 0) {
    this->R = R;
    this->G = G;
    this->B = B;
  }

  //Overload = operator to be able to say color1 = color2
  Color& operator= (const Color& color) {
    R = color.R;
    G = color.G;
    B = color.B;
    return *this;
  }
};



/*this in sdl:
struct color{
    unsigned int R,G,B;
    color(){
        R = G = B = 0;
    }

    color(int r, int g, int b){
        R = r;
        G = g;
        B = b;
    }
};
*/

#endif COLOR_H_
