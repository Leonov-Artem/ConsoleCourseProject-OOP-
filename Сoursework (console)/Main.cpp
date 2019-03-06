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

	Point<double> b(-5, 2), d(3, 8), p(2, 4);
	Figure f(b, d);
	cout << f.Hit(p) << endl;

	system("pause");
	return 0;
}