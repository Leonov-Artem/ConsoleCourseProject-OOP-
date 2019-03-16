#include "Point.h"

PointD::PointD() { x = 0; y = 0; }
PointD::PointD(double x, double y) { this->x = x; this->y = y; }

double PointD::GetX() { return x; }
double PointD::GetY() { return y; }

PointD PointD::GeneratePoint(double x_min, double x_max, double y_min, double y_max)
{
	double x = RandomNumber::FromUniformDistribution(x_min, x_max);
	double y = RandomNumber::FromUniformDistribution(y_min, y_max);
	return PointD(x, y);
}

void PointD::Print()
{
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
}