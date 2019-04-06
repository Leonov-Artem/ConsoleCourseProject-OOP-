#include "Vector.h"

namespace ObjectOrientedProject
{
	Vector::Vector() { x = 0; y = 0; }
	Vector::Vector(double x, double y) { this->x = x; this->y = y; }
	Vector::Vector(PointD p1, PointD p2)
	{
		x = p2.X - p1.X;
		y = p2.Y - p1.Y;
	}

	double Vector::GetX() { return x; }
	double Vector::GetY() { return y; }

	double Vector::GetLength() { return sqrt(x * x + y * y); }
	double Vector::Pseudoscalar(Vector v1, Vector v2) { return v1.x*v2.y - v2.x*v1.y; }
	double Vector::Dot(Vector v1, Vector v2) { return v1.x * v2.x + v1.y * v2.y; }
	double Vector::AngleBetween(Vector v1, Vector v2)
	{
		double cos = Dot(v1, v2) / (v1.Length * v2.Length);
		return acos(cos) * 180.0 / M_PI;
	}
}