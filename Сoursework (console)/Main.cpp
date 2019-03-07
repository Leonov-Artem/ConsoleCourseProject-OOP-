#include <iostream>
#include <Windows.h>
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

	Point<double> b(-5, 2), d(3, 8), e(3, -4), p(2, 4), some(3, -4);
	Figure f(b, d);

	cout << "������ �������� �������: " << f.ExactAreaValue() << endl;
	cout << "�����-����� : " << f.MonteCarloAlgorithm() << endl;
	

	//Vector<double> v1(b, d), v2(b, e), v3(b, p), v4(b, some);
	//cout << "����� ������������ v2 ^ v1 = " << Vector<double>::Pseudoscalar(v2, v1) << endl;
	//cout << "����� ������������ v2 ^ v4 = " << Vector<double>::Pseudoscalar(v2, v4) << endl;
	//cout << "��������� ����� some � �������: " << f.Hit(some) << endl;

	system("pause");
	return 0;
}