#include <iostream>
using namespace std;        

int main() {
    // int numberV ;
     //string svv ;

     int* number = new int;
     string* S = new string;

        cout << "Enter a number: ";
        cin >> *number;
        cout << "Enter a string: ";
        cin >> *S;

        cout << "The value of the dynamically allocated integer is :" << *number << endl;
        cout << "The value of the dynamically allocated string is: " << *S << endl;
        delete number;
        delete S;

        return 0;
    }