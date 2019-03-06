#include "Rectangle.h"
#include "Point.h"

void Rectangle::CoordinateDetermination(Point<double> b, Point<double> d, Point<double> m, Point<double> e)
{
	length = m.GetX() - b.GetX();
	width = d.GetY() - e.GetY();

	A = Point<double>(b.GetX(),		e.GetY());
	B = Point<double>(b.GetX(),		d.GetY());
	C = Point<double>(m.GetX(),		d.GetY());
	D = Point<double>(m.GetX(),		e.GetY());
}

Rectangle::Rectangle() 
{ 
	A = B = C = D = Point<double>(0, 0); 
}
Rectangle::Rectangle(Point<double> b, Point<double> d, Point<double> m, Point<double> e)
{
	CoordinateDetermination(b, d, m, e);
}

Point<double> Rectangle::GetA() { return A; }
Point<double> Rectangle::GetB() { return B; }
Point<double> Rectangle::GetC() { return C; }
Point<double> Rectangle::GetD() { return D; }

double Rectangle::Length()		{ return length; }
double Rectangle::Width()		{ return width; }

double Rectangle::Area()		{ return length * width; }