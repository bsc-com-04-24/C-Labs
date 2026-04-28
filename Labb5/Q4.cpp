#include <iostream>
#include <string>
using namespace std;

int main() {

    int num ;

    cout << "Please enter a number between 5 and 10: " << endl;

    while(true) {
       cin >> num;


       //check if input is nom integer
       if(cin.fail()) {
        cout << "Sorry, you entered an invalid number, Please try again" << endl;
        cin.clear(); //clear the error flag
        cin.ignore(100000, '\n'); //discard invalid input
       }

       // check if number is between 5 and 10
       else if (num >= 5 && num <= 10) {
         cout << "Your input value(" << num << ") has been accepted." << endl;
        break;
       }

       //mumber is valid integer but outside range
       else {
          cout << "You entered " << num << " . Please enter a number between 5 and 10" << endl;
       }
    }

    return 0;

}
 