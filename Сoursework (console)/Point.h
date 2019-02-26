#pragma once
#ifndef POINT_H
#define POINT_H

template <class T>
class Point
{
	public:
		Point();
		Point(T x, T y);
		T GetX();
		T GetY();
	private:
		T x, y;
};

#endif // !POINT_H
