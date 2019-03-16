#include "Rectangle.h"
#include "Point.h"

void Rectangle::CoordinateDetermination(PointD b, PointD d, PointD m, PointD e)
{
	length = m.X - b.X;
	width = d.Y - e.Y;

	A = PointD(b.X,	e.Y);
	B = PointD(b.X,	d.Y);
	C = PointD(m.X,	d.Y);
	D = PointD(m.X,	e.Y);
}

Rectangle::Rectangle() 
{ 
	A = B = C = D = PointD(0, 0); 
}
Rectangle::Rectangle(PointD b, PointD d, PointD m, PointD e)
{
	CoordinateDetermination(b, d, m, e);
}

PointD Rectangle::GetA()		{ return A; }
PointD Rectangle::GetB()		{ return B; }
PointD Rectangle::GetC()		{ return C; }
PointD Rectangle::GetD()		{ return D; }

double Rectangle::GetLength()	{ return length; }
double Rectangle::GetWidth()	{ return width; }

double Rectangle::Area()		{ return length * width; }