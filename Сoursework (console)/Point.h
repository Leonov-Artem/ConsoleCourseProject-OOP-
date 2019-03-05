#pragma once
#ifndef POINT_H
#define POINT_H

template <typename T>
class Point
{
private:
	T x, y;

public:
		Point()				{ x = 0; y = 0; }
		Point(T x, T y)		{ this->x = x; this->y = y; }

		T GetX()			{ return x; }
		T GetY()			{ return y; }

		static Point GeneratePoint(double x_min, double x_max, double y_min, double y_max)
		{
			double x = RandomNumber::FromNormalDistribution(x_min, x_max);
			double y = RandomNumber::FromNormalDistribution(y_min, y_max);
			return Point(x, y);
		}

		void Print()
		{
			std::cout << "x = " << x << std::endl;
			std::cout << "y = " << y << std::endl;
		}
};

#endif // !POINT_H
