#include <iostream>
#include <Windows.h>
#include "Testing.h"

int main()
{
	using namespace std;
	setlocale(LC_CTYPE, "");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Testing::DisplayTestTableProceduralApplication(1e3, 10);

	system("pause");
	return 0;
}