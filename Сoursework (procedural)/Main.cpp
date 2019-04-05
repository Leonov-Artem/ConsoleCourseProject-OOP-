#include <iostream>
#include "Figure.h"

double RelativeError(double exact_value, double approximation)
{
	return abs(exact_value - approximation) / exact_value * 100;
}

int main()
{
	using namespace std;

	setlocale(LC_CTYPE, "");

	PointD b{ -12, 0 }; 
	PointD d{ -6, 2 };

	Figure f;
	f = CreateFigure(b, d);

	double a1 = f.ExactAreaValue;
	double a2 = f.MonteCarloAlgorithm;

	cout << "Точное значение площади: " << a1 << endl;
	cout << "Монте-Карло: " << a2 << endl;
	cout << "Относительная погрешность: " << RelativeError(a1, a2) << "%" << endl;

	system("pause");
	return 0;
}