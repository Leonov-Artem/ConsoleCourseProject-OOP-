#pragma once

#define _USE_MATH_DEFINES
#include <math.h>
#include "Point2.h"

namespace ProceduralProject
{
	struct Semicircle
	{
		PointD d, m, e, Centre;
		double Radius, Area;
	};

	void SetArea(Semicircle& semicircle)
	{
		semicircle.Area = 0.5 * M_PI * semicircle.Radius * semicircle.Radius;
	}

	Semicircle CreateSemicircle(PointD d, PointD m, PointD e)
	{
		Semicircle semicircle;

		semicircle.d = d;
		semicircle.m = m;
		semicircle.e = e;

		semicircle.Radius = m.x - d.x;
		semicircle.Centre = PointD{ d.x, m.y };
		SetArea(semicircle);

		return semicircle;
	}

	double SemicircleEquation(Semicircle semicircle, PointD point)
	{
		double x0 = semicircle.Centre.x;
		double y0 = semicircle.Centre.y;

		return x0 + sqrt(pow(semicircle.Radius, 2) - pow(point.y - y0, 2));
	}
	bool PointInsideSemicircle(Semicircle semicircle, PointD point)
	{
		return (bool)(point.x < SemicircleEquation(semicircle, point));
	}
}