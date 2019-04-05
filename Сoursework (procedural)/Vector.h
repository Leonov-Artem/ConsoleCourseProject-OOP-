#pragma once

//////////////////////////////
#define _USE_MATH_DEFINES
#include <math.h>
//////////////////////////////
#include "Point.h"
#include <cmath>

struct Vector
{
	PointD p1; 
	PointD p2;

	double x;
	double y;

	double Length;
};

void SetLength(Vector& vector)
{
	double x = vector.p1.x;
	double y = vector.p2.y;
	vector.Length = sqrt(vector.x * vector.x + vector.y * vector.y);
}

Vector CreateVector(PointD p1, PointD p2)
{
	Vector v;
	v.p1 = p1;
	v.p2 = p2;

	v.x = p2.x - p1.x;
	v.y = p2.y - p1.y;

	SetLength(v);

	return v;
}

double Pseudoscalar(Vector v1, Vector v2)	{ return v1.x*v2.y - v2.x*v1.y; }
double Dot(Vector v1, Vector v2)			{ return v1.x * v2.x + v1.y * v2.y; }
double AngleBetween(Vector v1, Vector v2)
{
	double cos = Dot(v1, v2) / (v1.Length * v2.Length);
	return acos(cos) * 180.0 / M_PI;
}
