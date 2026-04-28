#include "circle.h"
#include <iostream>

using namespace std;

  shapes::circle::circle(){
    radius = 0;
  }

  shapes::circle::circle(int radius1){
    radius = radius1;
  }

  shapes::circle::~circle(){

  }

  void shapes::circle::SetRadius(int radius2){
    radius = radius2;
  }

  int shapes::circle::GetRadius(){
    return radius;
}
