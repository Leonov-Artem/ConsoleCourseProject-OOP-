#include "Figure.h"
#include "Triangle.h"
#include "Vector.h"
#include "Semicircle.h"
#include <cmath>

Figure::Figure() 
{
	b = d = m = e = Point<double>(0, 0);
}
Figure::Figure(Point<double> point1, Point<double> point2)
{
	// определение всех координат фигуры по двум введенным координатам
	CoordinateDetermination(point1, point2);
}

void Figure::CoordinateDetermination(Point<double> point1, Point<double> point2)
{
	if (point1.GetX() < point2.GetX())
		// значит point1 - это точка b
		b = point1;
	else
	{
		b = point2;
		point2 = point1; // чтобы убрать лишние проверки
	}

	if (b.GetY() > point2.GetY())
	{
		e = point2;
		d = Point<double>(e.GetX(), e.GetY() + 2 * (b.GetY() - e.GetY()));
	}
	else
	{
		d = point2;
		e = Point<double>(d.GetX(), d.GetY() - 2 * (d.GetY() - b.GetY()));
	}

	m = Point<double>(e.GetX() + b.GetY() - e.GetY(), b.GetY());
}

Point<double> Figure::GetB() { return this->b; }
Point<double> Figure::GetD() { return this->d; }
Point<double> Figure::GetM() { return this->m; }
Point<double> Figure::GetE() { return this->e; }

bool Figure::Hit(Point<double> x)
{
	Vector<double> BD(b, d), BX(b, x), BE(b, e);

	double angle_between_BD_and_BE = Vector<double>::AngleBetween(BD, BE);
	double angle_between_BX_and_BE = Vector<double>::AngleBetween(BX, BE);
	
	return (bool)(angle_between_BX_and_BE <= angle_between_BD_and_BE && (x.GetY() <= d.GetY() && x.GetY() >= e.GetY() ) );
}

double Figure::ExactAreaValue()
{
	double area_triangle = Triangle(b, d, e).Area();
	double area_semicircle = Semicircle(d, m, e).Area();
	return area_semicircle + area_triangle;
}
//double Figure::MonteCarloAlgorithm()
//{
//	int amount_points = 10e6;
//
//	for (int i = 0; i < amount_points; i++)
//	{
//
//	}
//}