#include <iostream>
#include "Rectangle2.h"
#include "Triangle2.h"

using namespace std;

int main2(){
    Rectangle2 rect;
    Triangle2 trgl;
    Polygon poly;

    Polygon* pPoly1 = &rect;       //pointer of type baseclass has address of a derived class' object
    Polygon* pPoly2 = &trgl;
    Polygon* pPoly = &poly;
    
    pPoly1 -> SetValues(4,5);       //equivalent to rect.SetValues(4,5)
    pPoly2 -> SetValues(4,5);
    pPoly -> SetValues(4,5);

    cout << pPoly1->Area() << '\n';
    cout << pPoly1->Area() << '\n';
    cout << pPoly->Area() << '\n';

    return 0;
}


