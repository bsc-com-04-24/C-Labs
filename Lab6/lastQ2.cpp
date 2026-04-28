#include <iostream>
using namespace std;

int main() {

    double dimension1, dimension2;;
    double** doubleArrayPointer = nullptr;

    
    
    cout << "Enter number of rows" << endl;
    cin >> dimension1;
    cout << "Enter number of columns" << endl;
    cin >> dimension2;

    if(dimension1 <= 0 || dimension2 <= 0) {
        cout << "Error: dimensions must be positive." << endl;
        return 1; // Exit with an error code
    }
    else if(dimension1 > 3|| dimension2 >3) {
        cout << "Error: dimensions are too large." << endl;
        return 1; // Exit with an error code
    }

    else {
        doubleArrayPointer = new double*[(int)(dimension1)];
        for(int i = 0; i < (int)(dimension1); i++) {
            doubleArrayPointer[i] = new double[(int)(dimension2)];
        }

          if(doubleArrayPointer == nullptr) {
             cout << "Error: memory could not be allocated." << endl;
          }
          else {
        // Initialize the array elements (example initialization)
               for(int i = 0; i < dimension1; i++) {
                   for(int j = 0; j < dimension2; j++) {
                   doubleArrayPointer[i][j] = dimension1 * dimension2; // Example value, you can modify this as needed
               }
        }

        // Output the values of the array elements
        cout << "You entered: " << endl;
        for(int i = 0; i < dimension1; i++) {
            for(int j = 0; j < dimension2; j++) {
                cout << doubleArrayPointer[i][j] << " ";
            }
            cout << endl;
        }
        cout << endl;

        for(int i = 0; i < (int)(dimension1); i++) {
            delete[] doubleArrayPointer[i];
        }
        delete[] doubleArrayPointer;   // deallocate memory for the array
    }
}
}
