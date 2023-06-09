#include "Triangle.h"
#include "RightTriangle.h"
#include "WrongFigure.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C, "Прямоугольный треугольник") {
	if (C != 90) {
		throw WrongFigure("Ошибка создания фигуры! Причина: угол С не равен 90.\n\n");
	}
}