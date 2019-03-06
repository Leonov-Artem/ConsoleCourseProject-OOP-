#include "Semicircle.h"
#define _USE_MATH_DEFINES
#include <math.h>

Semicircle::Semicircle(Point<double> d, Point<double> m, Point<double> e)
{
	double r = m.GetX() - d.GetX();

	this->d = d;
	this->m = m;
	this->e = e;
}

Point<double> Semicircle::GetD()	{ return d; }
Point<double> Semicircle::GetM()	{ return m; }
Point<double> Semicircle::GetE()	{ return e; }

double Semicircle::R()				{ return r; }

double Semicircle::Area()			{ return 0.5 * M_PI * r * r; }