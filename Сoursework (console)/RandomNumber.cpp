#include "RandomNumber.h"
#include <random>
#include <cmath>
#include <ctime>

namespace ObjectOrientedProject
{
	double RandomNumber::FromUniformDistribution(double min, double max)
	{
		std::random_device    rand_dev;
		std::mt19937          generator(rand_dev());
		std::uniform_real_distribution<double>  distribution(min, max);
		return distribution(generator);
	}
}