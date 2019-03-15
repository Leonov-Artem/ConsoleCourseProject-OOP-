#include "RandomNumber.h"
#include <random>
#include <cmath>
#include <ctime>

double RandomNumber::FromNormalDistribution(double min, double max)
{
	std::random_device                  rand_dev;
	std::mt19937                        generator(rand_dev());
	std::uniform_int_distribution<int>  distr(min, max);
	return distr(generator);
}