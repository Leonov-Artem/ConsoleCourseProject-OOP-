#include "Triangle.h"

Triangle::Triangle(PointD b, PointD d, PointD e)
{
	height = d.GetX() - b.GetX();
	base = d.GetY() - e.GetY();

	this->b = b;
	this->d = d;
	this->e = e;
}

PointD Triangle::GetB()			{ return b; }
PointD Triangle::GetD()			{ return d; }
PointD Triangle::GetE()			{ return e; }

double Triangle::GetHeight()	{ return height; }
double Triangle::GetBase()		{ return base; }

double Triangle::Area()			{ return 0.5*base*height; }