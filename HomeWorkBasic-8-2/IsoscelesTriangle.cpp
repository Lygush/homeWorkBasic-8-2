#include "Triangle.h"
#include "IsoscelesTriangle.h"
#include "WrongFigure.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C, "Равнобедренный треугольник") {
	if (a != c) {
		throw WrongFigure("Ошибка создания фигуры! Причина: стороны \"a\" и \"c\" не равны.\n\n");
	}
	if (A != C) {
		throw WrongFigure("Ошибка создания фигуры! Причина: углы \"A\" и \"C\" не равны.\n\n");
	}
}