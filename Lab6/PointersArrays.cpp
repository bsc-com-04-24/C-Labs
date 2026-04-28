#include <iostream>
using namespace std;

int main() {
     
    int numbersArray[5];

    int* pPointer = nullptr;

    pPointer = numbersArray;   // array name is the address of the first element
    *pPointer = 10;   // assign value to first element of array
    pPointer++;   // move pointer to the next element
    *pPointer = 20;   // assign value to second element of array

    pPointer = &numbersArray[2];   // reset pointer to the beginning of the array
    *pPointer = 30;   // assign value to third element of array

    pPointer = numbersArray + 3;  // move pointer to the fourth element of the array
    *pPointer = 40;   // assign value to fourth element of array

    pPointer = numbersArray;   // reset pointer to the beginning of the array

    *(pPointer + 4) = 50;   // assign value to fifth element of array using pointer arithmetic using indirection

    for (int n = 0; n < 5; n++){          //iterate and outputs all elements of the array
        cout << numbersArray[n] << ", ";
           // print elements of the array
    }

           return 0;
}
