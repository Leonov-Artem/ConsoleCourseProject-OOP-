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

	Point<double> b(-12, 0), d(-6, 2);
	Figure f(b, d);

	double ExactAreaValue = f.ExactAreaValue();
	double motneCarlo = f.MonteCarloAlgorithm();

	cout << "������ �������� �������: " <<ExactAreaValue << endl;
	cout << "�����-����� : " <<motneCarlo << endl;
	cout << "������������� �����������: " << RelativeError(ExactAreaValue, motneCarlo) << endl;

	//Vector<double> v1(b, d), v2(b, e), v3(b, p), v4(b, some);
	//cout << "����� ������������ v2 ^ v1 = " << Vector<double>::Pseudoscalar(v2, v1) << endl;
	//cout << "����� ������������ v2 ^ v4 = " << Vector<double>::Pseudoscalar(v2, v4) << endl;
	//cout << "��������� ����� some � �������: " << f.Hit(some) << endl;

	system("pause");
	return 0;
}