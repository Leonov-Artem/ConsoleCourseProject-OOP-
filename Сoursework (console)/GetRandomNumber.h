#pragma once
#ifndef GETRANDOMNUMBER_H
#define GETRANDOMNUMBER_H

template <typename T>
class GetRandomNumber
{
public:
	GetRandomNumber();
	static T FromNormalDistribution(T min, T max);
};

#endif // !GETRANDOMNUMBER_H
