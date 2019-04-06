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

	Figure figure;
	figure = CreateFigure(b, d);

	double exact_area = figure.ExactAreaValue;
	double monte_carclo = �alculateMonteCarlo(figure, 1e4);

	cout << "������ �������� �������: " << exact_area << endl;
	cout << "�����-�����: " << monte_carclo << endl;
	cout << "������������� �����������: " << RelativeError(exact_area, monte_carclo) << "%" << endl;

	system("pause");
	return 0;
}