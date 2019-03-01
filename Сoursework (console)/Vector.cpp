#include "Vector.h"
#include "Point.h"
#include <cmath>
#define _USE_MATH_DEFINES
#include <math.h>

Vector::Vector(double x, double y)					{ this->x = x; this->y = y; }
Vector::Vector(Point p1, Point p2)
{
	x = p2.GetX() - p1.GetX();
	y = p2.GetY() - p1.GetY();
}

double Vector::Length()								{ return round( sqrt(x * x + y * y) * 100) / 100; }
double Vector::Dot(Vector v1, Vector v2)			{ return v1.x * v2.x + v1.y * v2.y; }
double Vector::AngleBetween(Vector v1, Vector v2)	
{
	double cos = Dot(v1, v2) / (v1.Length() * v2.Length());
	return round( (acos(cos) * 180.0 / M_PI) * 100) / 100;
}