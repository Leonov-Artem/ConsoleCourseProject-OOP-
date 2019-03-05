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

	Point<double> p1(-5, 2);
	Point<double> p2(3, 8);

	Figure figure(p1, p2);
	double area = figure.ExactAreaValue();

	system("pause");
	return 0;
}