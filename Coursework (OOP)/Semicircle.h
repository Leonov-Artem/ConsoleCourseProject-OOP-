#pragma once
#include "Point.h"
#include "IFigure.h"

namespace ObjectOrientedProject
{
	class Semicircle : public IFigure
	{
	private:
		PointD d, m, e, centre;
		double r;

		double SemicircleEquation(PointD point);

	public:
		Semicircle(PointD d, PointD m, PointD e);

		PointD GetD();
		PointD GetM();
		PointD GetE();
		PointD GetCentre();
		double R();

		__declspec(property(get = GetD))		PointD D;
		__declspec(property(get = GetM))		PointD M;
		__declspec(property(get = GetE))		PointD E;
		__declspec(property(get = GetCentre))	PointD Centre;
		__declspec(property(get = R))			double Radius;

		bool PointInsideSemicircle(PointD point);

		double Area();
	};
}
