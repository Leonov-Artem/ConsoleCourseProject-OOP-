#include "Figure.h"
#include "Triangle.h"
#include "Point.h"
#include "Vector.h"
#include "Rectangle.h"
#include "Semicircle.h"
#include <cmath>

namespace ObjectOrientedProject
{
	Figure::Figure()
	{
		b = d = m = e = PointD(0, 0);
	}
	Figure::Figure(PointD point1, PointD point2)
	{
		// ����������� ���� ��������� ������ �� ���� ��������� �����������
		CoordinateDetermination(point1, point2);
	}

	void Figure::CoordinateDetermination(PointD point1, PointD point2)
	{
		if (point1.X < point2.X)
			// ������ point1 - ��� ����� b
			b = point1;
		else
		{
			b = point2;
			point2 = point1; // ����� ������ ������ ��������
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

	bool Figure::Hit(PointD point)
	{
		if (point.X >= e.X)
		{
			Semicircle semicircle(d, m, e);
			return semicircle.PointInsideSemicircle(point);
		}
		else
		{
			Triangle triangle(b, d, e);
			return triangle.PointInsideTriangle(point);
		}
	}

	double Figure::ExactAreaValue()
	{
		double area_triangle = Triangle(b, d, e).Area();
		double area_semicircle = Semicircle(d, m, e).Area();
		return area_semicircle + area_triangle;
	}
	double Figure::MonteCarloAlgorithm(double amount_points)
	{
		Rectangle rectangle(b, d, m, e);			// ���������� �������������, � ������� ��������� ������ 
		double rectangle_area = rectangle.Area();

		double x_min = rectangle.VertexA.X;
		double x_max = rectangle.VertexD.X;
		double y_min = rectangle.VertexA.Y;
		double y_max = rectangle.VertexB.Y;

		int number_points_inside_figure = 0;		// ������� ���-�� ����� ������ ������ 

		for (int i = 0; i < amount_points; i++)
		{
			// ���������� ����� ����� 
			PointD new_point = PointD::GeneratePoint(x_min, x_max, y_min, y_max);

			// ��������� ����� �� ��������� ������ 
			if (Hit(new_point))
				number_points_inside_figure++;
		}

		return rectangle_area * number_points_inside_figure / amount_points;
	}
}