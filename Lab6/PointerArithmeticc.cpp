#include <iostream>
using namespace std;

int main() {

    int* pPointer = nullptr;    // declare pointer and initialize to null so it doesn't point to a random address
    int numbersArray[3] = {10, 20, 30};   // declare an array of integers and initialize it with values

     pPointer = numbersArray; 
     
    cout << "address at pPointer: " << pPointer << endl;   // output the value of the pointer, which is null
    cout << "address of numbersArray[0]: " << &numbersArray[0] << endl;   // output the address of the variable numbersArray
     // assign the address of numbersArray to pPointer
    cout << "value at pPointer: " << *pPointer << endl;   // output the value at the address that pPointer is pointing to

    cout << "Value at ++pPointer: " << *(++pPointer) << endl;   // this will increment the pointer before dereferencing it

    cout << "value at pPointer++: " << *(pPointer++) << endl;   

     return 0;
}