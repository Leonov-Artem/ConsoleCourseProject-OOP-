#pragma once
#include "Point.h"

class Triangle
{
private:
	Point<double> b, d, e;
	double height, base;

public:
	Triangle(Point<double> b, Point<double> d, Point<double> e);
	
	Point<double> GetB();
	Point<double> GetD();
	Point<double> GetE();

	double Height();
	double Base();

	double Area();
};