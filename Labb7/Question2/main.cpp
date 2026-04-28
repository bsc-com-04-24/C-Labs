#include "rectanglle.h"
#include <iostream>

using namespace std;

int main(){
    
    rectanglle rect;

    float input1, input2;

    cout << "Please enter the length" << endl;
    cin >> input1;

    cout << "please enter the width" << endl;
    cin >> input2;

    rect.SetLength(input1);
    rect.SetWidth(input2);
    rect.CalculateArea(input1,input2);

    cout << "The length is :" << rect.GetLength() << endl;
    cout << "The width is :" << rect.GetWidth() << endl;    
    cout << "The  1st area is :" << rect.CalculateArea(input1,input2) << endl;

    float lengthh2, widthh2;

     cout << "Please enter the length2" << endl;
    cin >> lengthh2;

    cout << "please enter the width2" << endl;
    cin >> widthh2;

    rectanglle rect2(lengthh2, widthh2);    

    cout << "The 2nd area is: " << rect2.CalculateArea(lengthh2, widthh2) << endl;

    return 0;
}