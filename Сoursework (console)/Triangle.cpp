#include "Triangle.h"

Triangle::Triangle(Point<double> b, Point<double> d, Point<double> e)
{
	height = d.GetX() - b.GetX();
	base = d.GetY() - e.GetY();

	this->b = b;
	this->d = d;
	this->e = e;
}

Point<double> Triangle::GetB()	{ return b; }
Point<double> Triangle::GetD()	{ return d; }
Point<double> Triangle::GetE()	{ return e; }

double Triangle::Height()		{ return height; }
double Triangle::Base()			{ return base; }

double Triangle::Area()			{ return 0.5*base*height; }