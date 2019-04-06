#pragma once

#include "RandomNumber.h"
#include <iostream>

namespace ObjectOrientedProject
{
#ifndef POINT_H
#define POINT_H

	class PointD
	{
	private:
		double x, y;

	public:
		PointD();
		PointD(double x, double y);

		double GetX();
		double GetY();

		__declspec(property(get = GetX)) double X;
		__declspec(property(get = GetY)) double Y;

		static PointD GeneratePoint(double x_min, double x_max, double y_min, double y_max);

		void Print();
	};
}
#endif // !POINT_H