#include "Triangle.h"
#include "EquilateralTriangle.h"
#include "WrongFigure.h"

EquilateralTriangle::EquilateralTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C, "�������������� �����������") {
	if ((A != B) || (B != C)) {
		throw WrongFigure("������ �������� ������! �������: ���� �� ����� 60.\n\n");
	}
	if ((a != b) || (b != c)) {
		throw WrongFigure("������ �������� ������! �������: ������� �� �����.\n\n");
	}
}
