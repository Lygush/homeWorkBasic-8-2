#include "Triangle.h"
#include "IsoscelesTriangle.h"
#include "WrongFigure.h"

IsoscelesTriangle::IsoscelesTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C, "�������������� �����������") {
	if (a != c) {
		throw WrongFigure("������ �������� ������! �������: ������� \"a\" � \"c\" �� �����.\n\n");
	}
	if (A != C) {
		throw WrongFigure("������ �������� ������! �������: ���� \"A\" � \"C\" �� �����.\n\n");
	}
}