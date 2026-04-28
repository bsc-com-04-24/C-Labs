#include <iostream>
#include <limits>
using namespace std;

    double area1(double baseT, double heightT){
        double triangle = 0.5 * (baseT * heightT);

        return triangle;
    }

    double area2(double lengthR, double widthR){
         double rectangle = lengthR * widthR;

         return rectangle;
    } 

    double area3(double length1, double length2){
        double square = length1 * length2;

        return square;
    }
     
    int main() {
        int option ;

         while (true){

        cout << "Please select the area of the shape to calculate" << endl;
        cout << " 1. Square " << '\n' << " 2. Rectangle" << '\n' << " 3. Triangle" << '\n' << " 4. Quit Program" << '\n' << "Enter selection" << endl;
            
        cin >> option;

     
        if( option >= 1 && option <=4){

            if(option == 1){
                double length;
                double width;

                 cout << "Enter the side size: " << endl;
                 cin >> length;
                 cin >> width;
                 double square = area3(length,width);
                 cout << "The area of the square is " << square << endl;
            }

            else if (option == 2){
                double lengthR;
                double widthR;

                cout << "Enter the length and the width: " << endl;
                cin >> lengthR;
                cin >> widthR;
                double rectangle = area2(lengthR,widthR);
                cout << "The area of the rectangle is " << rectangle << endl;

            }

            else if (option == 3){
                double baseT;
                double heightT;

                cout << "Enter the base and the height: " << endl;
                cin >> baseT;
                cin >> heightT;
                double triangle = area1(baseT,heightT);
                cout << "The area of the triangle is " << triangle << endl;

            }

            else if (option == 4){
                cout << "Program is quitting" << endl;
                break;
            }

        }
    
   
      else {
            cout << "You have entered invalid input. Please enter a valid input" << endl;
            cin.clear();       // clear the error state
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard invalid input
            cin >> option;
        }
    }
}

         
    