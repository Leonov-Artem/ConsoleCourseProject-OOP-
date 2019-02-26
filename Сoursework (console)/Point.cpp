#include "Point.h"
#include "RandomNumber.h"
#include <iostream>

Point::Point(double x, double y) { this->x = x; this->y = y; }

double Point::GetX() { return x; }
double Point::GetY() { return y; }

Point Point::GeneratePoint(double x_min, double x_max, double y_min, double y_max)
{
	double x = RandomNumber::FromNormalDistribution(x_min, x_max);
	double y = RandomNumber::FromNormalDistribution(y_min, y_max);
	return Point(x, y);
}

void Point::Print()
{
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
}