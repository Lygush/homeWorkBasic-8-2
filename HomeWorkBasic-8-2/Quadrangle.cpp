#include "Figure.h"
#include "Quadrangle.h"
#include "WrongFigure.h"

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D) : Figure("Четырёхугольник") {
    if ((A + B + C + D) != 360) {
        throw WrongFigure("Ошибка создания фигуры! Причина: сумма углов не равна 360.\n\n");
    }
    else {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
}

Quadrangle::Quadrangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : Figure(name) {
    if ((A + B + C + D) != 360) {
        throw WrongFigure("Ошибка создания фигуры! Причина: сумма углов не равна 360.\n\n");
    }
    else {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
}

std::string Quadrangle::Info() {
    return figureName + ", создан.\n" + "Стороны: a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d) + "\n"
        + "Углы: A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D) + "\n\n";
}