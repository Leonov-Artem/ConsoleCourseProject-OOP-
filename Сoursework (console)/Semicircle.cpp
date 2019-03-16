#include "Semicircle.h"
#define _USE_MATH_DEFINES
#include <math.h>

Semicircle::Semicircle(PointD d, PointD m, PointD e)
{
	r = m.X - d.X;
	centre = PointD(m.X - r, m.Y);

	this->d = d;
	this->m = m;
	this->e = e;
}

PointD Semicircle::GetD()		{ return d; }
PointD Semicircle::GetM()		{ return m; }
PointD Semicircle::GetE()		{ return e; }
PointD Semicircle::GetCentre()	{ return centre; }
double Semicircle::R()			{ return r; }
double Semicircle::Area()		{ return 0.5 * M_PI * r * r; }

double Semicircle::CircleEquation(PointD point)
{
	double x = point.X - centre.X;
	double y = point.Y - centre.Y;
	return pow(x, 2) + pow(y, 2);
}