#pragma once
#include <iostream>

namespace shapes{

  class triangle{  

    private:
    float base;
    float height;

    public:
    triangle();
    triangle(double base1, double height1);
    ~triangle();
    void SetBase(double base1);
    float GetBase();
    void SetHeight(double height2);
    float GetHeight();

  };
};