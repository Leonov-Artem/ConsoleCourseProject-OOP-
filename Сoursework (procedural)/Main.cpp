#include <iostream>
#include "RandomNumber.h"
#include "Point.h"
#include "Vector.h"
#include "Triangle.h"
#include "Semicircle.h"

int main()
{
	using namespace std;

	PointD b{ 5,2 };
	PointD m{ 7, 0 };
	PointD e{ 5,-2 };

	Semicircle s;
	s = CreateSemicircle(b, m, e);

	cout << s.Area << endl;

	system("pause");
	return 0;
}