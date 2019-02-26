#pragma once
#ifndef GETRANDOMNUMBER_H
#define GETRANDOMNUMBER_H

class RandomNumber
{
public:
	RandomNumber();
	static double FromNormalDistribution(double min, double max);
};

#endif // !GETRANDOMNUMBER_H
