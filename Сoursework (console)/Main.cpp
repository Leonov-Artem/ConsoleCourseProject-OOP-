#include <iostream>
#include "GetRandomNumber.h"

int main()
{
	for (int i = 0; i < 25; i++)
	{
		double num = GetRandomNumber::FromNormalDistribution(-25, 25);
		std::cout << num << std::endl;
	}

	system("pause");
	return 0;
}