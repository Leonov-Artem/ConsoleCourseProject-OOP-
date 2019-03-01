#include <iostream>
#include "RandomNumber.h"
#include "Point.h"
#include "Vector.h"

using std::cout;
using std::endl;

int main()
{
	Vector v1(2, -4);
	Vector v2(17, 8);
	
	cout << Vector::AngleBetween(v1, v2) << endl;

	system("pause");
	return 0;
}