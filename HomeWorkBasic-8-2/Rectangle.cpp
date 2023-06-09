#include "Parallelogram.h"
#include "Rectangle.h"
#include "WrongFigure.h"

Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D, "Прямоугольник") {
	if ((A != 90) || (B != 90) || (C != 90) || (D != 90)) {
		throw WrongFigure("Ошибка создания фигуры! Причина: один или несколько углов не равны 90.");
	}
}
Rectangle::Rectangle(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : Parallelogram(a, b, c, d, A, B, C, D, name) {
	if ((A != 90) || (B != 90) || (C != 90) || (D != 90)) {
		throw WrongFigure("Ошибка создания фигуры! Причина: один или несколько углов не равны 90.");
	}
}