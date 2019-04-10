#include <iostream>
#include <Windows.h>
#include "Testing.h"

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	cout << "������� ����� ���������� ������������ ���������� ��� ������� � 1.000 �����: " << Testing::ProceduralApplication(1e3, 10) << " (�.)" << endl;
	cout << "������� ����� ���������� ������������ ���������� ��� ������� � 10.000 �����: " << Testing::ProceduralApplication(1e4, 10) << " (�.)" << endl;
	cout << "������� ����� ���������� ������������ ���������� ��� ������� � 100.000 �����: " << Testing::ProceduralApplication(1e5, 10) << " (�.)" << endl;
	cout << "������� ����� ���������� ������������ ���������� ��� ������� � 1.000.000 �����: " << Testing::ProceduralApplication(1e6, 10) << " (�.)" << endl;

	cout << endl;

	cout << "������� ����� ���������� ��������-���������������� ���������� ��� ������� � 1.000 �����: " << Testing::ObjectOrientedApplication(1e3, 10) << " (�.)" << endl;
	cout << "������� ����� ���������� ��������-���������������� ���������� ��� ������� � 10.000 �����: " << Testing::ObjectOrientedApplication(1e4, 10) << " (�.)" << endl;
	cout << "������� ����� ���������� ��������-���������������� ���������� ��� ������� � 100.000 �����: " << Testing::ObjectOrientedApplication(1e5, 10) << " (�.)" << endl;
	cout << "������� ����� ���������� ��������-���������������� ���������� ��� ������� � 1.000.000 �����: " << Testing::ObjectOrientedApplication(1e6, 10) << " (�.)" << endl;

	system("pause");
	return 0;
}