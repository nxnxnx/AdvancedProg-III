#ifndef shape_h
#define shape_h
#include <iostream>
#include <fstream>
#include <stdio.h>


using namespace std;


class Shape{
  protected:
    double PI;
    double r;
    double s;
    double p;
    double l;
  public:
    void setPi() { PI = 3.14159; }
    void setRadius(double Radius) { r = Radius;}
    void setSide(double Side) { s = Side;}
    void setHeight(double Height) { p = Height ;}
    void setWidth(double Width) { l = Width;}

};


#endif
