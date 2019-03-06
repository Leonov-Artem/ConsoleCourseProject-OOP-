#pragma once
#include "Point.h"

class Semicircle
{
private:
	Point<double> d, m, e;
	double r;

public:
	Semicircle(Point<double> d, Point<double> m, Point<double> e);
	
	Point<double> GetD();
	Point<double> GetM();
	Point<double> GetE();

	double R();

	double Area();
};

