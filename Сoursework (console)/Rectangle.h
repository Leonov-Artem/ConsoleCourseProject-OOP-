#pragma once
#include "Point.h"

class Rectangle
{
private:
	Point<double> A, B, C, D;
	double length, width;

	void CoordinateDetermination(Point<double> b, Point<double> d, Point<double> m, Point<double> e);

public:
	Rectangle();
	Rectangle(Point<double> b, Point<double> d, Point<double> m, Point<double> e);

	Point<double> GetA();
	Point<double> GetB();
	Point<double> GetC();
	Point<double> GetD();

	double Length();
	double Width();

	double Area();
};

