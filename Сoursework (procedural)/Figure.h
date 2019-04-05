#pragma once

#include "Point.h"
#include "Semicircle.h"
#include "Triangle.h"
#include "Rectangle.h"
#include "RandomNumber.h"

struct Figure
{
	PointD b, d, m, e;
	double ExactAreaValue, MonteCarloAlgorithm;
};

void SetCoordinate(Figure& figure, PointD point1, PointD point2)
{
	if (point1.x < point2.x)
		// значит point1 - это точка b
		figure.b = point1;
	else
	{
		figure.b = point2;
		point2 = point1; // чтобы убрать лишние проверки
	}

	if (figure.b.y > point2.y)
	{
		figure.e = point2;
		figure.d = PointD{ figure.e.x, figure.e.y + 2 * (figure.b.y - figure.e.y) };
	}
	else
	{
		figure.d = point2;
		figure.e = PointD{ figure.d.x, figure.d.y - 2 * (figure.d.y - figure.b.y) };
	}

	figure.m = PointD{ figure.e.x + figure.b.y - figure.e.y, figure.b.y };
}


bool Hit(Figure figure, PointD point)
{
	if (point.x >= figure.e.x)
	{
		Semicircle semicircle = CreateSemicircle(figure.d, figure.m, figure.e);
		return PointInsideSemicircle(semicircle, point);
	}
	else
	{
		Triangle triangle = CreateTriangle(figure.b, figure.d, figure.e);
		return PointInsideTriangle(triangle, point);
	}
}

void СalculateExactAreaValue(Figure& figure)
{
	Triangle triangle = CreateTriangle(figure.b, figure.d, figure.e);
	Semicircle semicircle = CreateSemicircle(figure.d, figure.m, figure.e);
	figure.ExactAreaValue = triangle.Area + semicircle.Area;
}
void ScalculateMonteCarlo(Figure& figure)
{
	// определяем прямоугольник, в котором находится фигура 
	Rectangle rectangle = CreateRectangle(figure.b, figure.d, figure.m, figure.e);
	double rectangle_area = rectangle.Area;

	double amount_points = 1e4;					// количество новых точек 
	int number_points_inside_figure = 0;		// счетчик кол-ва точек внутри фигуры 

	double x_min = rectangle.A.x;
	double x_max = rectangle.D.x;
	double y_min = rectangle.A.y;
	double y_max = rectangle.B.y;

	for (int i = 0; i < amount_points; i++)
	{
		// генерируем новую точку 
		PointD new_point = GeneratePoint(x_min, x_max, y_min, y_max);

		// проверяем точку на попадание внутрь 
		if (Hit(figure, new_point))
			number_points_inside_figure++;
	}

	figure.MonteCarloAlgorithm = rectangle_area * number_points_inside_figure / amount_points;
}

Figure CreateFigure(PointD point1, PointD point2)
{
	Figure figure;

	// определение всех координат фигуры по двум введенным координатам
	SetCoordinate(figure, point1, point2);
	СalculateExactAreaValue(figure);
	ScalculateMonteCarlo(figure);

	return figure;
}