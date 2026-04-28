#include <iostream>
using namespace std;

int main() {
    int dimension1, dimension2;

    // Input dimensions
    cout << "Enter number of rows (max 3): ";
    cin >> dimension1;

    cout << "Enter number of columns (max 3): ";
    cin >> dimension2;

    // Validate dimensions
    if (dimension1 > 3 || dimension2 > 3) {
        cout << "Error: Dimensions must not exceed 3." << endl;
        return 1;
    }

    // Allocate 2D array
    double** arr = new double*[dimension1];
    for (int i = 0; i < dimension1; i++) {
        arr[i] = new double[dimension2];
    }

    // Assign values using nested loops
    for (int i = 0; i < dimension1; i++) {
        for (int j = 0; j < dimension2; j++) {
            arr[i][j] = (i + 1) * (j + 1); // example values
        }
    }

    // Output values
    cout << "Array contents:\n";
    for (int i = 0; i < dimension1; i++) {
        for (int j = 0; j < dimension2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Free memory
    for (int i = 0; i < dimension1; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}