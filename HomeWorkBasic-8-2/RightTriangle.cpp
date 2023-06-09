#include "Triangle.h"
#include "RightTriangle.h"
#include "WrongFigure.h"

RightTriangle::RightTriangle(int a, int b, int c, int A, int B, int C) : Triangle(a, b, c, A, B, C, "������������� �����������") {
	if (C != 90) {
		throw WrongFigure("������ �������� ������! �������: ���� � �� ����� 90.\n\n");
	}
}