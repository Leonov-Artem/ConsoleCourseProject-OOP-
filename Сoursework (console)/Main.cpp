#include <iostream>
#include "RandomNumber.h"
#include "Point.h"

int main()
{
	/*for (int i = 0; i < 25; i++)
	{
		double num = RandomNumber::FromNormalDistribution(-25, 25);
		std::cout << num << std::endl;
	}
*/
	Point p =  Point::GeneratePoint(1, 2, 3, 4);
	p.Print();

	system("pause");
	return 0;
}