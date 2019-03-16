#pragma once
#include "RandomNumber.h"
#ifndef POINT_H
#define POINT_H

template <typename T>
class Point
{
private:
	T x, y;

	T GetX() { return x; }
	T GetY() { return y; }

public:
	Point()						{ x = 0; y = 0; }
	Point(T x, T y)				{ this->x = x; this->y = y; }
	Point(const Point& point)	{ x = point.X; y = point.Y; }

	__declspec(property(get = GetX)) T X;
	__declspec(property(get = GetX)) T Y;

	static Point GeneratePoint(double x_min, double x_max, double y_min, double y_max)
	{
		double x = RandomNumber::FromUniformDistribution(x_min, x_max);
		double y = RandomNumber::FromUniformDistribution(y_min, y_max);
		return Point(x, y);
	}

	void Print()
	{
		std::cout << "x = " << x << std::endl;
		std::cout << "y = " << y << std::endl;
	}
};

#endif // !POINT_H
