#include "Semicircle.h"
#define _USE_MATH_DEFINES
#include <math.h>

Semicircle::Semicircle(Point<double> d, Point<double> e)
{
	this->d = d;
	this->e = e;
}
double Semicircle::Area()
{
	double R = 0.5* (d.GetY() - e.GetY());
	return 0.5 * M_PI * R * R;	// площадь полуокружности
}