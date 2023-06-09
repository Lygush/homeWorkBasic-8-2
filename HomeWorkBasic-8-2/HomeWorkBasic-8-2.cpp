#include <iostream>
#include <string>
#include "Figure.h"
#include "Triangle.h"
#include "RightTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadrangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"
#include "WrongFigure.h"

void getInfo(Figure&);

int main()
{
    setlocale(LC_ALL, "Russian");

    try {
        Triangle triangleObj(90, 60, 30, 90, 20, 30);
        getInfo(triangleObj);
    }
    catch (WrongFigure error) {
        std::cout << error.what();
    }
    try {
        RightTriangle right(10, 20, 30, 90, 60, 30);
        getInfo(right);
    }
    catch (WrongFigure error) {
        std::cout << error.what();
    }
    try {
        IsoscelesTriangle isoscele(10, 20, 10, 64, 51, 65);
        getInfo(isoscele);
    }
    catch (WrongFigure error) {
        std::cout << error.what();
    }
    try {
        EquilateralTriangle equilateral(45, 50, 45, 60, 60, 60);
        getInfo(equilateral);
    }
    catch (WrongFigure error) {
        std::cout << error.what();
    }


    try {
        Quadrangle quadrangleObj(10, 20, 30, 40, 50, 60, 70, 80);
        getInfo(quadrangleObj);
    }
    catch (WrongFigure error) {
        std::cout << error.what();
    }
    try {
        Parallelogram parallelogram(20, 10, 20, 10, 50, 130, 50, 130);
        getInfo(parallelogram);
    }
    catch (WrongFigure error) {
        std::cout << error.what();
    }
    try {
        Rhomb rhomb(12, 10, 10, 10, 95, 85, 95, 85);
        getInfo(rhomb);
    }
    catch (WrongFigure error) {
        std::cout << error.what();
    }
    try {
        Square square(10, 10, 10, 10, 90, 90, 90, 90);
        getInfo(square);
    }
    catch (WrongFigure error) {
        std::cout << error.what();
    }
    try {
        Rectangle rectangle(10, 20, 10, 20, 90, 90, 90, 90);
        getInfo(rectangle);
    }
    catch (WrongFigure error) {
        std::cout << error.what();
    }
}

void getInfo(Figure& info) {
    std::cout << info.Info();
}