#include <iostream>
#include "RandomNumber.h"
#include "Point.h"
#include "Vector.h"
#include "Triangle.h"
#include "Semicircle.h"
#include "Rectangle.h"

int main()
{
	using namespace std;

	PointD b{ 0, 0 };
	PointD d{ 5, 2 };
	PointD m{ 7, 0 };
	PointD e{ 5, -2 };

	Rectangle r;
	r = CreateRectangle(b, d, m, e);
	cout << r.length << endl;

	system("pause");
	return 0;
}