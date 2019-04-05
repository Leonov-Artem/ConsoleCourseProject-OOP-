#pragma once
#include <random>
#include "Point.h"

double GetRandNum(double min, double max)
{
	std::random_device    rand_dev;
	std::mt19937          generator(rand_dev());
	std::uniform_real_distribution<double>  distribution(min, max);
	return distribution(generator);
}

PointD GeneratePoint(double x_min, double x_max, double y_min, double y_max)
{
	double x = GetRandNum(x_min, x_max);
	double y = GetRandNum(y_min, y_max);
	PointD p{ x, y };
	return p;
}