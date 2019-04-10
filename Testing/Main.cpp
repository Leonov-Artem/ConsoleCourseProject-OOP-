#include <iostream>
#include <Windows.h>
#include "Testing.h"

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "Среднее время выполнения процедруного приложения для выборки в 1.000 точек: " << Testing::ProceduralApplication(1e3, 10) << " (с.)" << endl;
	cout << "Среднее время выполнения процедруного приложения для выборки в 10.000 точек: " << Testing::ProceduralApplication(1e4, 10) << " (с.)" << endl;
	cout << "Среднее время выполнения процедруного приложения для выборки в 100.000 точек: " << Testing::ProceduralApplication(1e5, 10) << " (с.)" << endl;
	cout << "Среднее время выполнения процедруного приложения для выборки в 1.000.000 точек: " << Testing::ProceduralApplication(1e6, 10) << " (с.)" << endl;

	cout << endl;

	cout << "Среднее время выполнения объектно-ориентированного приложения для выборки в 1.000 точек: " << Testing::ObjectOrientedApplication(1e3, 10) << " (с.)" << endl;
	cout << "Среднее время выполнения объектно-ориентированного приложения для выборки в 10.000 точек: " << Testing::ObjectOrientedApplication(1e4, 10) << " (с.)" << endl;
	cout << "Среднее время выполнения объектно-ориентированного приложения для выборки в 100.000 точек: " << Testing::ObjectOrientedApplication(1e5, 10) << " (с.)" << endl;
	cout << "Среднее время выполнения объектно-ориентированного приложения для выборки в 1.000.000 точек: " << Testing::ObjectOrientedApplication(1e6, 10) << " (с.)" << endl;

	system("pause");
	return 0;
}