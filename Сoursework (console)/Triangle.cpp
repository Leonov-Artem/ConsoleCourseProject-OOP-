#include "Triangle.h"

Triangle::Triangle(Point<double> b, Point<double> d, Point<double> e)
{
	this->b = b;
	this->d = d;
	this->e = e;
}
double Triangle::Area()
{
	double h = d.GetX() - b.GetX();
	double a = d.GetY() - e.GetY();
	return 0.5*a*h;
}
