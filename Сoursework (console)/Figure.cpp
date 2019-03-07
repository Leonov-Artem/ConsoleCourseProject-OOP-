#include "Figure.h"
#include "Triangle.h"
#include "Vector.h"
#include "Rectangle.h"
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
	double pseudo = Vector<double>::Pseudoscalar(BE, BX);

	return (bool)(angle_between_BX_and_BE <= angle_between_BD_and_BE && pseudo > 0 );
}

double Figure::ExactAreaValue()
{
	double area_triangle = Triangle(b, d, e).Area();
	double area_semicircle = Semicircle(d, m, e).Area();
	return area_semicircle + area_triangle;
}
double Figure::MonteCarloAlgorithm()
{
	Rectangle rectangle(b, d, m, e); // определяем прямоугольник, в котором находится фигура 
	double rectangle_area = rectangle.Area();

	double amount_points = 1e5; // количество новых точек 
	int number_points_inside_figure = 0; // счетчик кол-ва точек внутри фигуры 

	double x_min = rectangle.GetA().GetX();
	double x_max = rectangle.GetD().GetX();
	double y_min = rectangle.GetA().GetY();
	double y_max = rectangle.GetB().GetY();

	for (int i = 0; i < amount_points; i++)
	{
		// генерируем новую точку 
		Point<double> new_point = Point<double>::GeneratePoint(x_min, x_max, y_min, y_max);

		// проверяем точку на попадание внутрь 
		if (Hit(new_point))
			number_points_inside_figure++;
	}

	return rectangle_area * number_points_inside_figure / amount_points;
}