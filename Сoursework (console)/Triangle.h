#pragma once
#include "Point.h"

namespace ObjectOrientedProject
{
	class Triangle
	{
	private:
		PointD b, d, e;
		double height, base;

	public:
		Triangle(PointD b, PointD d, PointD e);

		PointD GetB();
		PointD GetD();
		PointD GetE();

		__declspec(property(get = GetB)) PointD B;
		__declspec(property(get = GetD)) PointD D;
		__declspec(property(get = GetE)) PointD E;

		double GetHeight();
		double GetBase();

		__declspec(property(get = GetHeight)) double Height;
		__declspec(property(get = GetBase)) double Base;

		bool PointInsideTriangle(PointD point);

		double Area();
	};
}