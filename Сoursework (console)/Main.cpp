#include <iostream>
#include <Windows.h>
#include "RandomNumber.h"
#include "Point.h"
#include "Vector.h"
#include "Figure.h"

using std::cout;
using std::endl;

int main()
{
	setlocale(LC_CTYPE, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Point<double> p1(0, 5);
	Point<double> p2(6, 0);

	Figure f(p1, p2);

	cout << "b:\n"; f.GetB().Print(); cout << endl;
	cout << "d:\n"; f.GetD().Print(); cout << endl;
	cout << "m:\n"; f.GetM().Print(); cout << endl;
	cout << "e:\n"; f.GetE().Print(); cout << endl;

	system("pause");
	return 0;
}