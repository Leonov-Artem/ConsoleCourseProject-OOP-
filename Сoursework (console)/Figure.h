#pragma once
#include "Point.h"

class Figure
{
private:
	Point<double> b, d, m, e;
	void CoordinateDetermination(Point<double> point1, Point<double> point2);

public:
	Figure();
	Figure(Point<double> poin1, Point<double> point2);
	
	Point<double> GetB();
	Point<double> GetD();
	Point<double> GetM();
	Point<double> GetE();

	bool Hit(Point<double> point);

	double ExactAreaValue();
	double MonteCarloAlgorithm();
};