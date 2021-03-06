#pragma once

#include "Point2.h"
#include "Semicircle2.h"
#include "Triangle2.h"
#include "Rectangle2.h"
#include "RandomNumber2.h"

namespace ProceduralProject
{
	struct Figure
	{
		PointD b, d, m, e;
		double ExactAreaValue;
	};

	void SetCoordinate(Figure& figure, PointD point1, PointD point2)
	{
		if (point1.x < point2.x)
			// ������ point1 - ��� ����� b
			figure.b = point1;
		else
		{
			figure.b = point2;
			point2 = point1; // ����� ������ ������ ��������
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

	void �alculateExactAreaValue(Figure& figure)
	{
		Triangle triangle = CreateTriangle(figure.b, figure.d, figure.e);
		Semicircle semicircle = CreateSemicircle(figure.d, figure.m, figure.e);
		figure.ExactAreaValue = triangle.Area + semicircle.Area;
	}
	double �alculateMonteCarlo(Figure& figure, double amount_points = 1e4)
	{
		// ���������� �������������, � ������� ��������� ������ 
		Rectangle rectangle = CreateRectangle(figure.b, figure.d, figure.m, figure.e);
		double rectangle_area = rectangle.Area;

		double x_min = rectangle.A.x;
		double x_max = rectangle.D.x;
		double y_min = rectangle.A.y;
		double y_max = rectangle.B.y;

		int number_points_inside_figure = 0;		// ������� ���-�� ����� ������ ������ 

		for (int i = 0; i < amount_points; i++)
		{
			// ���������� ����� ����� 
			PointD new_point = GeneratePoint(x_min, x_max, y_min, y_max);

			// ��������� ����� �� ��������� ������ 
			if (Hit(figure, new_point))
				number_points_inside_figure++;
		}

		return  rectangle_area * number_points_inside_figure / amount_points;
	}

	Figure CreateFigure(PointD point1, PointD point2)
	{
		Figure figure;

		// ����������� ���� ��������� ������ �� ���� ��������� �����������
		SetCoordinate(figure, point1, point2);
		�alculateExactAreaValue(figure);

		return figure;
	}
}