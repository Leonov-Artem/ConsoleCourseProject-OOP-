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

	T GetX() { return x; }
	T GetY() { return y; }

public:
	Vector()											{ x = 0; y = 0; }
	Vector(T x, T y)									{ this->x = x; this->y = y; }
	Vector(const Vector& vector)						{ x = vector.X; y = vector.Y; }
	Vector(Point<T> p1, Point<T> p2)
	{
		x = p2.X - p1.X;
		y = p2.Y - p1.Y;
	}

	_declspec(property(get = GetX)) int X;
	_declspec(property(get = GetX)) int Y;

	double Length()										{ return sqrt(x * x + y * y); }
	static double Pseudoscalar(Vector v1, Vector v2)	{ return v1.x*v2.y - v2.x*v1.y; }
	static double Dot(Vector v1, Vector v2)				{ return v1.x * v2.x + v1.y * v2.y; }
	static double AngleBetween(Vector v1, Vector v2)
	{
		double cos = Dot(v1, v2) / (v1.Length() * v2.Length());
		return acos(cos) * 180.0 / M_PI;
	}
};