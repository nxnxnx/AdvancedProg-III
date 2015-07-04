#ifndef square_h
#define square_h
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "shape.h"

using namespace std;


class Square: public Shape{
  public:
   int luas_square() { return s*s;}
   int keliling_square() {return 4*s;}

};//end square

#endif
