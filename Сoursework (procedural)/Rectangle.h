#pragma once
#include "Point.h"

namespace ProceduralProject
{
	struct Rectangle
	{
		PointD A, B, C, D;
		double length, width, Area;
	};

	void CoordinateDetermination(Rectangle& rectangle, PointD b, PointD d, PointD m, PointD e)
	{
		rectangle.length = m.x - b.x;
		rectangle.width = d.y - e.y;

		rectangle.A = PointD{ b.x, e.y };
		rectangle.B = PointD{ b.x, d.y };
		rectangle.C = PointD{ m.x, d.y };
		rectangle.D = PointD{ m.x, e.y };
	}

	void SetArea(Rectangle& rectangle) { rectangle.Area = rectangle.length * rectangle.width; }

	Rectangle CreateRectangle(PointD b, PointD d, PointD m, PointD e)
	{
		Rectangle rectangle;
		CoordinateDetermination(rectangle, b, d, m, e);
		SetArea(rectangle);
		return rectangle;
	}
}