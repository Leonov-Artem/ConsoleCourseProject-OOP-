#pragma once

//////////////////////////////
#define _USE_MATH_DEFINES
#include <math.h>
//////////////////////////////
#include "Point2.h"
#include <cmath>

namespace ProceduralProject
{
	struct Vector
	{
		PointD p1, p2;
		double x, y, Length;
	};

	void SetLength(Vector& vector)
	{
		double x = vector.p1.x;
		double y = vector.p2.y;
		vector.Length = sqrt(vector.x * vector.x + vector.y * vector.y);
	}
	void SetXandY(Vector& vector)
	{
		vector.x = vector.p2.x - vector.p1.x;
		vector.y = vector.p2.y - vector.p1.y;
	}

	Vector CreateVector(PointD p1, PointD p2)
	{
		Vector v;
		v.p1 = p1;
		v.p2 = p2;

		SetXandY(v);
		SetLength(v);

		return v;
	}

	double Pseudoscalar(Vector v1, Vector v2) { return v1.x * v2.y - v2.x * v1.y; }
	double Dot(Vector v1, Vector v2) { return v1.x * v2.x + v1.y * v2.y; }
	double AngleBetween(Vector v1, Vector v2)
	{
		double cos = Dot(v1, v2) / (v1.Length * v2.Length);
		return acos(cos) * 180.0 / M_PI;
	}
}