#include <iostream>
#include <Windows.h>
#include "Testing.h"

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//cout << "������� ������������ ��������-���������������� ���������� �� ������� �� 10.000 �����:\n";
	//Testing::DisplayTestTableObjectOrientedApplication(1e6, 10);

	double d = Testing::RelativeErrorProceduralApplications(10000);
	cout << d << endl;
	//cout << "���:" << endl;
	//Testing::DisplayAverageResultsObjectOrientedApplication();
	//cout << endl;

	//cout << "�����������:" << endl;
	//Testing::DisplayAverageResultsProceduralApplication();

	system("pause");
	return 0;
}