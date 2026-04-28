#include "Area.h"
#include <iostream>
#define PI 3.14159

using namespace std;

float Area::CalculateAreaSqr(shapes::square& sq){
    return sq.GetLength() * sq.GetLength();
}

float Area::CalculateAreaTri(shapes::triangle& tr){
    return tr.GetBase() * tr.GetHeight();
}

float CalculateAreaCir(shapes::circle& cr){
    return PI * cr.GetRadius() * cr.GetRadius();
}