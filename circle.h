#ifndef circle_h
#define circle_h
#include <iostream>
#include <fstream>
#include <stdio.h>
#include "shape.h"

using namespace std;

class Circle: public Shape{
  public:
    double luas_circle() { return PI*r*r;}
    double keliling_circle() { return PI*2*r; }

};//end class circle

#endif
