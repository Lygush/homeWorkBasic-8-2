#include "Quadrangle.h"
#include "Parallelogram.h"
#include "WrongFigure.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D, "Параллелограмм") {
	if (a != c) {
		throw WrongFigure("Ошибка создания фигуры! Причина: стороны \"a\" и \"c\" не равны.\n\n");
	}
	if (b != d) {
		throw WrongFigure("Ошибка создания фигуры! Причина: стороны \"b\" и \"d\" не равны.\n\n");
	}
	if (A != C) {
		throw WrongFigure("Ошибка создания фигуры! Причина: углы \"A\" и \"C\" не равны.\n\n");
	}
	if (B != D) {
		throw WrongFigure("Ошибка создания фигуры! Причина: углы \"B\" и \"D\" не равны.\n\n");
	}
}
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : Quadrangle(a, b, c, d, A, B, C, D, name) {
	if (a != c) {
		throw WrongFigure("Ошибка создания фигуры! Причина: стороны \"a\" и \"c\" не равны.\n\n");
	}
	if (b != d) {
		throw WrongFigure("Ошибка создания фигуры! Причина: стороны \"b\" и \"d\" не равны.\n\n");
	}
	if (A != C) {
		throw WrongFigure("Ошибка создания фигуры! Причина: углы \"A\" и \"C\" не равны.\n\n");
	}
	if (B != D) {
		throw WrongFigure("Ошибка создания фигуры! Причина: углы \"B\" и \"D\" не равны.\n\n");
	}
}