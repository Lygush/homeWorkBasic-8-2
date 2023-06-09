#include "Parallelogram.h"
#include "Rhomb.h"
#include "WrongFigure.h"

Rhomb::Rhomb(int a, int b, int c, int d, int A, int B, int C, int D) : Parallelogram(a, b, c, d, A, B, C, D, "����") {
	if ((a != b) || (b != c) || (c != d)) {
		throw WrongFigure("������ �������� ������! �������: ������� �� ����� ����� �����.");
	}
}