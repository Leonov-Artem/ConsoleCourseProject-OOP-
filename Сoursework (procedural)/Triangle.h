#pragma once
#include "Point.h"
#include "Vector.h"

namespace ProceduralProject
{
	struct Triangle
	{
		PointD b, d, e;
		double height, base, Area;
	};

	void SetArea(Triangle& triangle) { triangle.Area = 0.5 * triangle.base * triangle.height; }

	Triangle CreateTriangle(PointD b, PointD d, PointD e)
	{
		Triangle triangle;

		triangle.b = b;
		triangle.d = d;
		triangle.e = e;

		triangle.height = d.x - b.x;
		triangle.base = d.y - e.y;

		SetArea(triangle);

		return triangle;
	}

	bool PointInsideTriangle(Triangle triangle, PointD x)
	{
		Vector BD, BX, BE;
		BD = CreateVector(triangle.b, triangle.d);
		BX = CreateVector(triangle.b, x);
		BE = CreateVector(triangle.b, triangle.e);

		double angle_between_BD_and_BE = AngleBetween(BD, BE);
		double angle_between_BX_and_BE = AngleBetween(BX, BE);
		double pseudo = Pseudoscalar(BE, BX);

		return (bool)(angle_between_BX_and_BE <= angle_between_BD_and_BE && pseudo > 0);
	}
}