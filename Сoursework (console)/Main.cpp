#include <iostream>
#include <Windows.h>
#include "RandomNumber.h"
#include "Point.h"
#include "Vector.h"
#include "Figure.h"
#include "Semicircle.h"
#include "Triangle.h"

using std::cout;
using std::endl;

int main()
{
	setlocale(LC_CTYPE, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Point<int> p0(3, 2), p1(10, 5), p2(10, 1), p3(9, 9);
	Vector<int> v1(p0, p1), v2(p0, p2), v3(p0, p3);

	cout << "”гол между v1 и v2 = " << Vector<int>::AngleBetween(v1, v2) << endl;
	cout << "”гол между v3 и v1 = " << Vector<int>::AngleBetween(v3, v1) << endl;

	system("pause");
	return 0;
}