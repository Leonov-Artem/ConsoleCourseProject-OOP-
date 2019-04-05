#include <iostream>
#include "RandomNumber.h"
#include "Point.h"
#include "Vector.h"
#include "Triangle.h"

int main()
{
	using namespace std;

	//PointD p1{ 3, 4 };
	//PointD p2{ 2, 8 };
	//PointD p3{ -2, 1 };
	//PointD p4{ 6, -12 };

	//Vector v1;
	//v1 = CreateVector(p1, p2);
	//
	//cout << "v1.x = " << v1.x << endl;
	//cout << "v1.y = " << v1.y << endl;
	//cout << endl;

	//Vector v2;
	//v2 = CreateVector(p3, p4);

	//cout << "v2.x = " << v2.x << endl;
	//cout << "v2.y = " << v2.y << endl;
	//cout << endl;

	//cout << AngleBetween(v1, v2) << endl;

	PointD p1{ 0, 0 };
	PointD p2{ 5,2 };
	PointD p3{ 5, -2 };

	Triangle t;
	t = CreateTriangle(p1, p2, p3);
	cout << t.Area << endl;

	system("pause");
	return 0;
}