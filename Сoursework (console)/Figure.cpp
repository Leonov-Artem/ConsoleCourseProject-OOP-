#include "Figure.h"
#include "Triangle.h"
#include "Point.h"
#include "Vector.h"
#include "Rectangle.h"
#include "Semicircle.h"
#include <cmath>

Figure::Figure() 
{
	b = d = m = e = PointD(0, 0);
}
Figure::Figure(PointD point1, PointD point2)
{
	// определение всех координат фигуры по двум введенным координатам
	CoordinateDetermination(point1, point2);
}

void Figure::CoordinateDetermination(PointD point1, PointD point2)
{
	if (point1.X < point2.X)
		// значит point1 - это точка b
		b = point1;
	else
	{
		b = point2;
		point2 = point1; // чтобы убрать лишние проверки
	}

	if (b.Y > point2.Y)
	{
		e = point2;
		d = PointD(e.X, e.Y + 2 * (b.Y - e.Y));
	}
	else
	{
		d = point2;
		e = PointD(d.X, d.Y - 2 * (d.Y - b.Y));
	}

	m = PointD(e.X + b.Y - e.Y, b.Y);
}

PointD Figure::GetB() { return b; }
PointD Figure::GetD() { return d; }
PointD Figure::GetM() { return m; }
PointD Figure::GetE() { return e; }

bool Figure::Hit(PointD x)
{
	Vector BD(b, d), BX(b, x), BE(b, e);
	Semicircle semicircle(d, m, e);

	double angle_between_BD_and_BE = Vector::AngleBetween(BD, BE);
	double angle_between_BX_and_BE = Vector::AngleBetween(BX, BE);
	double pseudo = Vector::Pseudoscalar(BE, BX);

	return (bool)(angle_between_BX_and_BE <= angle_between_BD_and_BE && pseudo > 0);
}

double Figure::ExactAreaValue()
{
	double area_triangle = Triangle(b, d, e).Area();
	double area_semicircle = Semicircle(d, m, e).Area();
	return area_semicircle + area_triangle;
}
double Figure::MonteCarloAlgorithm()
{
	Rectangle rectangle(b, d, m, e);			// определяем прямоугольник, в котором находится фигура 
	double rectangle_area = rectangle.Area();

	double amount_points = 1e4;					// количество новых точек 
	int number_points_inside_figure = 0;		// счетчик кол-ва точек внутри фигуры 

	double x_min = rectangle.VertexA.X;
	double x_max = rectangle.VertexD.X;
	double y_min = rectangle.VertexA.Y;
	double y_max = rectangle.VertexB.Y;

	for (int i = 0; i < amount_points; i++)
	{
		// генерируем новую точку 
		PointD new_point = PointD::GeneratePoint(x_min, x_max, y_min, y_max);

		// проверяем точку на попадание внутрь 
		if (Hit(new_point))
			number_points_inside_figure++;
	}

	return rectangle_area * number_points_inside_figure / amount_points;
}