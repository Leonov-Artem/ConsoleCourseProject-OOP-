#pragma once
#include "Point.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

template <typename T>
class Vector
{
private:
	T x, y;

public:
	Vector()											{ x = 0; y = 0; }
	Vector(T x, T y)									{ this->x = x; this->y = y; }
	Vector(Point<T> p1, Point<T> p2)
	{
		x = p2.GetX() - p1.GetX();
		y = p2.GetY() - p1.GetY();
	}

	double Length()										{ return sqrt(x * x + y * y); }
	static double Pseudoscalar(Vector v1, Vector v2)	{ return v1.x*v2.y - v2.x*v1.y; }
	static double Dot(Vector v1, Vector v2)				{ return v1.x * v2.x + v1.y * v2.y; }
	static double AngleBetween(Vector v1, Vector v2)
	{
		double cos = Dot(v1, v2) / (v1.Length() * v2.Length());
		return round((acos(cos) * 180.0 / M_PI) * 100) / 100;
	}
};