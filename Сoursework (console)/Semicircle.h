#pragma once
#include "Point.h"

class Semicircle
{
private:
	Point<double> d, e;

public:
	Semicircle(Point<double> d, Point<double> e);
	
	double Area();
};

