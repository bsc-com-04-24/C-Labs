#pragma once
#include <iostream>
using namespace std;

namespace shapes{
 
  class square{

     private:
     int length;

     public:
     square();
     square(int length2);
     ~square();
     void SetLength(int length1);
     int GetLength();
  };
};