#include "Figure.h"
#include "Triangle.h"
#include "Semicircle.h"
#include <cmath>

Figure::Figure() 
{
	b = d = m = e = Point<double>(0, 0);
}
Figure::Figure(Point<double> point1, Point<double> point2)
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
		d = Point<double>( e.GetX(), e.GetY() + 2 * (b.GetY() - e.GetY()) );
	}
	else
	{
		d = point2;
		e = Point<double>( d.GetX(), d.GetY() - 2 * (d.GetY() - b.GetY()) );
	}

	m = Point<double>( e.GetX() + b.GetY() - e.GetY(), b.GetY() );
}

Point<double> Figure::GetB() { return this->b; }
Point<double> Figure::GetD() { return this->d; }
Point<double> Figure::GetM() { return this->m; }
Point<double> Figure::GetE() { return this->e; }

double Figure::ExactAreaValue()
{
	double area_triangle = Triangle(b, d, e).Area();
	double area_semicircle = Semicircle(d, e).Area();
	return area_semicircle + area_triangle;
}
