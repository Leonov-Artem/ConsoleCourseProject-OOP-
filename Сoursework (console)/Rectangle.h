#pragma once
#include "Point.h"

class Rectangle
{
private:
	PointD A, B, C, D;
	double length, width;

	void CoordinateDetermination(PointD b, PointD d, PointD m, PointD e);

public:
	Rectangle();
	Rectangle(PointD b, PointD d, PointD m, PointD e);

	PointD GetA();
	PointD GetB();
	PointD GetC();
	PointD GetD();

	__declspec(property(get = GetA)) PointD VertexA;
	__declspec(property(get = GetB)) PointD VertexB;
	__declspec(property(get = GetC)) PointD VertexC;
	__declspec(property(get = GetD)) PointD VertexD;

	double GetLength();
	double GetWidth();

	__declspec(property(get = GetLength)) double Length;
	__declspec(property(get = GetWidth)) double Width;

	double Area();
};

