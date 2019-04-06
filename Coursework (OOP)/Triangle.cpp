#include "Triangle.h"
#include "Vector.h"

namespace ObjectOrientedProject
{
	Triangle::Triangle(PointD b, PointD d, PointD e)
	{
		height = d.GetX() - b.GetX();
		base = d.GetY() - e.GetY();

		this->b = b;
		this->d = d;
		this->e = e;
	}

	PointD Triangle::GetB() { return b; }
	PointD Triangle::GetD() { return d; }
	PointD Triangle::GetE() { return e; }

	double Triangle::GetHeight() { return height; }
	double Triangle::GetBase() { return base; }

	bool Triangle::PointInsideTriangle(PointD x)
	{
		Vector BD(b, d), BX(b, x), BE(b, e);
		double angle_between_BD_and_BE = Vector::AngleBetween(BD, BE);
		double angle_between_BX_and_BE = Vector::AngleBetween(BX, BE);
		double pseudo = Vector::Pseudoscalar(BE, BX);

		return (bool)(angle_between_BX_and_BE <= angle_between_BD_and_BE && pseudo > 0);
	}

	double Triangle::Area() { return 0.5*base*height; }
}