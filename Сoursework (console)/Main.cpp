#include <iostream>
#include "RandomNumber.h"

int main()
{
	for (int i = 0; i < 25; i++)
	{
		double num = RandomNumber::FromNormalDistribution(-25, 25);
		std::cout << num << std::endl;
	}

	system("pause");
	return 0;
}