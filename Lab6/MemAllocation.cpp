#include <iostream>
using namespace std;

int main() {

    int numberOfelement = 0;
    int* dynamicArray = nullptr;

    cout << "How many elements would you like to type? ";
    cin >> numberOfelement;

    dynamicArray = new int[numberOfelement];   //Create array an runtime and0 allocate memory for an array of integers on the heap

    if(dynamicArray == nullptr) {
        cout << "Error: memory could not be allocated." << endl;

    }
    else {
        for (int i = 0; i < numberOfelement; i++) {
            cout << "Enter element " << i + 1 << ": ";
            cin >> dynamicArray[i];   // assign values to the elements of the array
        }

        cout << "You entered: ";
        for (int i = 0; i < numberOfelement; i++) {
            cout << dynamicArray[i] << " ";   // output the values of the elements of the array
        }
        cout << endl;

        delete[] dynamicArray;   // deallocate memory for the array
    }
}