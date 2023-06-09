#include "Figure.h"

#pragma once

class Quadrangle : public Figure {
protected:
    int a{}, b{}, c{}, d{}, A{}, B{}, C{}, D{};
public:
    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D);

    Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name);

    std::string Info() override;
};