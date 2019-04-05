#pragma once
#include <random>

double GetRandNum(double min, double max)
{
	std::random_device    rand_dev;
	std::mt19937          generator(rand_dev());
	std::uniform_real_distribution<double>  distribution(min, max);
	return distribution(generator);
}