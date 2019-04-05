#include <iostream>
#include <Windows.h>
#include "Point.h"
#include "Vector.h"
#include "Figure.h"

using std::cout;
using std::endl;

double RelativeError(double exact_value, double approximation)
{
	return abs(exact_value - approximation) / exact_value * 100;
}

int main()
{
	setlocale(LC_CTYPE, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	PointD b(-12, 0), d(-6, 2);
	Figure f(b, d);

	double ExactAreaValue = f.ExactAreaValue();
	double monteCarlo = f.MonteCarloAlgorithm();

	cout << "������ �������� �������: " <<ExactAreaValue << endl;
	cout << "�����-����� : " <<monteCarlo << endl;
	cout << "������������� �����������: " << RelativeError(ExactAreaValue, monteCarlo) << "%" << endl;	

	system("pause");
	return 0;
}