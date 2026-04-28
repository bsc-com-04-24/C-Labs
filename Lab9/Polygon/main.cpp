#include <iostream>
#include "Rectangle2.h"
#include "Triangle2.h"

using namespace std;

int main() {
    Rectangle2 rect;
    Triangle2 trlg;
    rect.SetValues(4,5);     //
    trlg.SetValues(4,5);
    
    cout << rect.Area() << '\n';
    cout << trlg.Area() << '\n';
    return 0;
}