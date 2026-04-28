#pragma once
#include <iostream>
#include "square.h"
#include "triangle.h"
#include "circle.h"

class Area{

    public:
    static float CalculateAreaSqr(shapes::square& sq);
    static float CalculateAreaTri(shapes::triangle& tr);
    static float CalculateAreaCir(shapes::circle& cr);
};