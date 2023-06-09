#include "Quadrangle.h"
#include "Parallelogram.h"
#include "WrongFigure.h"

Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D) : Quadrangle(a, b, c, d, A, B, C, D, "��������������") {
	if (a != c) {
		throw WrongFigure("������ �������� ������! �������: ������� \"a\" � \"c\" �� �����.\n\n");
	}
	if (b != d) {
		throw WrongFigure("������ �������� ������! �������: ������� \"b\" � \"d\" �� �����.\n\n");
	}
	if (A != C) {
		throw WrongFigure("������ �������� ������! �������: ���� \"A\" � \"C\" �� �����.\n\n");
	}
	if (B != D) {
		throw WrongFigure("������ �������� ������! �������: ���� \"B\" � \"D\" �� �����.\n\n");
	}
}
Parallelogram::Parallelogram(int a, int b, int c, int d, int A, int B, int C, int D, std::string name) : Quadrangle(a, b, c, d, A, B, C, D, name) {
	if (a != c) {
		throw WrongFigure("������ �������� ������! �������: ������� \"a\" � \"c\" �� �����.\n\n");
	}
	if (b != d) {
		throw WrongFigure("������ �������� ������! �������: ������� \"b\" � \"d\" �� �����.\n\n");
	}
	if (A != C) {
		throw WrongFigure("������ �������� ������! �������: ���� \"A\" � \"C\" �� �����.\n\n");
	}
	if (B != D) {
		throw WrongFigure("������ �������� ������! �������: ���� \"B\" � \"D\" �� �����.\n\n");
	}
}