#pragma once
#include "Point.h"

class Semicircle
{
private:
	Point<double> d, m, e, centre;
	double r;

	double CircleEquation(Point<double> point);

public:
	Semicircle(Point<double> d, Point<double> m, Point<double> e);
	
	Point<double> GetD();
	Point<double> GetM();
	Point<double> GetE();
	Point<double> Centre();
	double R();

	double Area();
};

