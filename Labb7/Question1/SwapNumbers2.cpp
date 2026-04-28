#include <iostream>
using namespace std;


int SwapNumberss (int* a, int* b){
    int temp;

    temp = *a; 
    *a = *b; 
    *b = temp; 


    return 0;
}
int main(){ 
      int* varA = new int(25); 
      int* varB = new int(100); 

      cout << "varA before swap: " << *varA << endl; //varA is 25 
      cout << "VarB before swap: " << *varB << endl; //varB is 100 

      SwapNumberss(varA, varB); 

      cout << "varA after swap: " << *varA << endl; //varA is 100 
      cout << "VarB after swap: " << *varB << endl; //varB is 25 

        delete varA;
        delete varB;
      return 0;
}      