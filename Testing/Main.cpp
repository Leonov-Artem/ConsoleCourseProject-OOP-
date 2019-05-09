#include <iostream>
#include <Windows.h>
#include "Testing.h"

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//cout << "Таблица тестирования объектно-ориентированного приложения на выборке из 10.000 точек:\n";
	//Testing::DisplayTestTableObjectOrientedApplication(1e6, 10);

	double d = Testing::RelativeErrorProceduralApplications(10000);
	cout << d << endl;
	//cout << "ООП:" << endl;
	//Testing::DisplayAverageResultsObjectOrientedApplication();
	//cout << endl;

	//cout << "Процедурное:" << endl;
	//Testing::DisplayAverageResultsProceduralApplication();

	system("pause");
	return 0;
}