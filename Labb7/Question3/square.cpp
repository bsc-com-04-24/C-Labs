#include "square.h"
#include <iostream>
using namespace std;

void shapes::square::SetLength(int length1){
    length = length1;
}

int shapes::square::GetLength(){
    return length;
}

shapes::square::square(){
    length = 0;
}

shapes::square::square(int length2){
    length = length2;
}

shapes::square::~square(){
}