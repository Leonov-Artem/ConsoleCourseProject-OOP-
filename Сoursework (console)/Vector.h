#pragma once
#include "Point.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

class Vector
{
private:
	double x, y;

public:
	Vector();
	Vector(double x, double y);
	Vector(PointD p1, PointD p2);

	double GetX();
	double GetY();
	double GetLength();

	_declspec(property(get = GetX)) double X;
	_declspec(property(get = GetY)) double Y;
	_declspec(property(get = GetLength)) double Length;

	static double Pseudoscalar(Vector v1, Vector v2);
	static double Dot(Vector v1, Vector v2);
	static double AngleBetween(Vector v1, Vector v2);
};