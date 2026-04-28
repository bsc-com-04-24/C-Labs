#include <iostream>
using namespace std;

int main() {
     int x = 3;

     int y = x++;      //  the value of x is increased after the intital value of x is assigned to y hence the value assigned to y is the value of x before it has been incremented, which is 3, and then x becomes 4
     
     cout << "x: " << x << endl;   // x is now 4
     cout << "y: " << y << endl;   // y will be 3

     return 0;
}