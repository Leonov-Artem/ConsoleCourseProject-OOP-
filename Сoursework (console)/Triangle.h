#pragma once
#include "Point.h"

class Triangle
{
private:
	Point<double> b, d, e;

public:
	Triangle(Point<double> b, Point<double> d, Point<double> e);
	
	double Area();
};

