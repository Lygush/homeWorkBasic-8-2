#include "Quadrangle.h"

#pragma once
class Parallelogram : public Quadrangle {
public:
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D);
    Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
};