#include "Rectangle.h"
#include "Square.h"
#include "WrongFigure.h"

Square::Square(int a, int b, int c, int d, int A, int B, int C, int D) : Rectangle(a, b, c, d, A, B, C, D, "Квадрат") {
	if ((a != b) || (b != c) || (c != d)) {
		throw WrongFigure("Ошибка создания фигуры! Причина: стороны не равны между собой.");
	}
}