#include <iostream>
using namespace std;

int main(){

    int firstvalue;
    int secondvalue;

    int* pPointer = nullptr;

    pPointer = &firstvalue;
    *pPointer = 10;    //indirection

    pPointer = &secondvalue;
    *pPointer = 20;    //indirection

    cout << "First value: " << firstvalue << '\n';
    cout << "Second value: " << secondvalue << '\n';

    return 0;

}