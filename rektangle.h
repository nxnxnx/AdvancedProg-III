#ifndef rektangle_h
#define rektangle_h
#include <iostream>
#include <stdio.h>
#include <fstream>
#include "shape.h"
using namespace std;


class Rektangle: public Shape{
  public:
   int luas_rekt() { return p*l ;}
   int keliling_rekt() { return 2*(p+l) ;}

};//end rektangle


#endif
