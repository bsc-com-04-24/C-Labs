#include <iostream>
using namespace std;

int main() {

     int* pPointer = nullptr;    // declare pointer and initialize to null so it doesn't point to a random address
      int integerVar = 5;

      pPointer = &integerVar;

      cout << "IntegerVar: " << integerVar << endl;
      cout << "Address of integer " << &integerVar << endl;
      cout << "Pointer: " << pPointer << endl;
      cout << "address of pPointer" << &pPointer << endl;

        return 0;
    }