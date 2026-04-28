#include "rectanglle.h"
#include <iostream>

using namespace std;

rectanglle::rectanglle(){
    length = 0.0f;
    width = 0.0f;
}

rectanglle::~rectanglle(){
}

rectanglle::rectanglle(float length2, float width2 ){
    length = length2;
    width = width2;
}



void rectanglle::SetLength(float lengthOf){
    length = lengthOf;
}

float rectanglle::GetLength(){
    return length;
}

void rectanglle::SetWidth(float widthOf){
    width = widthOf;

}

float rectanglle::GetWidth(){
    return width;
}

float rectanglle::CalculateArea(float length1, float width1){
    length = length1;
    width = width1;
    float area = length*width;
    return area;
}