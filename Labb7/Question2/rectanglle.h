#pragma one
#include <iostream>

using namespace std;

class rectanglle{

    private:
      float length;
      float width;

    public:
      rectanglle();
      ~rectanglle();
      rectanglle(float length2, float width2);

      void SetLength(float lengthOf);
      void SetWidth(float widthOf);
      float GetLength();
      float GetWidth();
      float CalculateArea(float length1, float width1);
};