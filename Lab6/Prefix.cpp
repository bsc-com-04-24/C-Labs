#include <iostream>
using namespace std;

int main() {
     int x = 3;

     int y = ++x;      //  the value of x is increased before the value of x is assigned to y, so x becomes 4 and then y is assigned the value of x, which is 4
     //hence the value assigned to y is the value of x after it has been incremented, which is 4
     cout << "x: " << x << endl;   // x is now 4
     cout << "y: " << y << endl;   // y is assigned the value of x after it has been incremented, so y is also 4

     return 0;
}