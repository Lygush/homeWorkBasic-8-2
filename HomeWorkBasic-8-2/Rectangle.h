#include "Parallelogram.h"

#pragma once
class Rectangle : public Parallelogram {
public:
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D);
    Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);
};