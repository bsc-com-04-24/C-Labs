#include "triangle.h"
#include <iostream>
using namespace std;


shapes::triangle::triangle(){
    base = 0.0;
    height = 0.0;
}

shapes::triangle::triangle(double base1, double height1){
    base = base1;
    height = height1;
}

shapes::triangle::~triangle(){
}

void shapes::triangle:: SetBase(double base1){
    base = base1;
}
float shapes::triangle:: GetBase(){
    return base;
}
void shapes::triangle:: SetHeight(double height2){
        height = height2;
}

float shapes::triangle::GetHeight(){
    return height;
}
