#pragma once
#include "Point.h"

class Figure
{
private:
	PointD b, d, m, e;
	void CoordinateDetermination(PointD point1, PointD point2);

public:
	Figure();
	Figure(PointD poin1, PointD point2);

	PointD GetB();
	PointD GetD();
	PointD GetM();
	PointD GetE();

	__declspec(property(get = GetB)) PointD B;
	__declspec(property(get = GetD)) PointD D;
	__declspec(property(get = GetM)) PointD M;
	__declspec(property(get = GetE)) PointD E;

	bool Hit(PointD x);

	double ExactAreaValue();
	double MonteCarloAlgorithm(double amount_points=1e4);
};