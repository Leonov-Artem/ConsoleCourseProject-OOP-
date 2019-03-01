#pragma once
#include "Point.h"

class Vector
{
public:
	Vector();
	Vector(double x, double y);
	Vector(Point p1, Point p2);

	double Length();
	static double Dot(Vector v1, Vector v2);
	static double AngleBetween(Vector v1, Vector v2);

private:
	double x, y;
};

