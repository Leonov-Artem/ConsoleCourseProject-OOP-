#include "Semicircle.h"
#define _USE_MATH_DEFINES
#include <math.h>

Semicircle::Semicircle(Point<double> d, Point<double> m, Point<double> e)
{
	r = m.GetX() - d.GetX();
	centre = Point<double>(m.GetX() - r, m.GetY());

	this->d = d;
	this->m = m;
	this->e = e;
}

Point<double> Semicircle::GetD()	{ return d; }
Point<double> Semicircle::GetM()	{ return m; }
Point<double> Semicircle::GetE()	{ return e; }
Point<double> Semicircle::Centre()	{ return centre; }
double Semicircle::R()				{ return r; }
double Semicircle::Area()			{ return 0.5 * M_PI * r * r; }

double Semicircle::CircleEquation(Point<double> point)
{
	double x = point.GetX() - centre.GetX();
	double y = point.GetY() - centre.GetY();
	return pow(x, 2) + pow(y, 2);
}