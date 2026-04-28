#pragma once
#include <iostream>
using namespace std;

namespace shapes{

  class circle{
    private:
    int radius;

    public:
    circle();
    circle(int radius1);
    ~circle();
    void SetRadius(int radius2);
    int GetRadius();

  };
};