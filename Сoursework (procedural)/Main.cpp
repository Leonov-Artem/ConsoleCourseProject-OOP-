#include <iostream>
#include "RandomNumber.h"
#include "Point.h"
#include "Vector.h"

int main()
{
	using namespace std;

	PointD p1;
	p1.x = 3;
	p1.y = 4;

	PointD p2;
	p2.x = 2;
	p2.y = 8;

	PointD p3;
	p3.x = -2;
	p3.y = 1;

	PointD p4;
	p4.x = 6;
	p4.y = -12;

	Vector v1;
	v1 = CreateVector(p1, p2);
	
	cout << "v1.x = " << v1.x << endl;
	cout << "v1.y = " << v1.y << endl;
	cout << endl;

	Vector v2;
	v2 = CreateVector(p3, p4);

	cout << "v2.x = " << v2.x << endl;
	cout << "v2.y = " << v2.y << endl;
	cout << endl;

	cout << AngleBetween(v1, v2) << endl;

	system("pause");
	return 0;
}