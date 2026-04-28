#include <iostream>
#include "triangle.h"
#include "circle.h"
#include "square.h"
#include "Area.h"

using namespace std;

int main(){
    
    int choice;

    do{
        cout << "\nMenu:\n";
        cout << "1. Calculate area of a square\n";
        cout << "2. Calculate area of a triangle\n";
        cout << "3. Calculate area of a circle\n";
        cout << "4. Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;
    
        switch(choice){
            case 1: {
                float side;
                cout << "Enter side of square: ";
                cin >> side;
                shapes::square sq(side);
                cout << "Area of square is: " << Area::CalculateAreaSqr(sq) << endl;
                break;
            }

            case 2: {
                float base, height;
                cout << "Enter base of triangle: ";
                cin >> base;
                cout << "Enter height of triangle: ";
                cin >> height;
                shapes::triangle tr(base, height);
                cout << "Area of triangle: " << Area::CalculateAreaTri(tr) << endl;
                break;
            }
     
            case 3: {
                float radius;
                cout << "Enter radius of circle: ";
                cin >> radius;
                shapes::circle cr(radius);
                cout << "Area of circle: " << Area::CalculateAreaCir(cr) << endl;
                break;
            }

             case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while(choice != 4);

    return 0;
        
}