#include "GetRandomNumber.h"

template <typename T>
T GetRandomNumber<T>::FromNormalDistribution(T min, T max)
{
	T mean = (max - min) / 2;
	T standard_deviation = (max - min) / 6;

	// ��� ��������� ����������������� ���������� �����
	std::random_device randomDevice;
	// ����� ��������. ����, ���������� �� ��-��� ������� ����� ��������
	std::mt19937 randomGen(randomDevice());
	std::normal_distribution<float> normalDistribution(mean, standard_deviation);

	return normalDistribution(randomGen);
}