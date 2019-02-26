#pragma once
#ifndef POINT_H
#define POINT_H

class Point
{
	public:
		Point();
		Point(double x, double y);

		double GetX();
		double GetY();

		static Point GeneratePoint(double x_min, double x_max, double y_min, double y_max);

		void Print();
	private:
		double x, y;
};

#endif // !POINT_H
