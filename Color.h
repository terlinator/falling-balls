/* Cam - 12/1/23 5:33
*/
#ifndef COLOR_H_
#define COLOR_H_

struct Color {
  int R, G, B;

  Color(const Color& color) {
    *this = color;
  }
  Color(int R = 0, int G = 0, int B = 0) {
    this->R = R;
    this->G = G;
    this->B = B;
  }
  Color& operator= (const Color& color) {
    R = color.R;
    G = color.G;
    B = color.B;
    return *this;
  }
};

#endif COLOR_H_
