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

	Point<double> b(-5, 2), d(3, 8);
	Figure f(b, d);

	double ExactAreaValue = f.ExactAreaValue();
	double motneCarlo = f.MonteCarloAlgorithm();

	cout << "������ �������� �������: " <<ExactAreaValue << endl;
	cout << "�����-����� : " <<motneCarlo << endl;
	cout << "������������� �����������: " << RelativeError(ExactAreaValue, motneCarlo) << endl;	

	system("pause");
	return 0;
}