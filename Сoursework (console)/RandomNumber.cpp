#include "RandomNumber.h"
#include <random>
#include <cmath>

double RandomNumber::FromNormalDistribution(double min, double max)
{
	// ���. ��������� ����. ����.
	double mean = (max + min) / 2;					// ���. �������� 
	double standard_deviation = (max - min) / 6;	// ���

	// ��� ��������� ����������������� ���������� �����
	std::random_device randomDevice;
	// ����� ��������. ����, ���������� �� ��-��� ������� ����� ��������
	std::mt19937 randomGen(randomDevice());
	// ���������� �������������
	std::normal_distribution<double> normalDistribution(mean, standard_deviation);

	// ������� �����, ������������ �� ���� ������ ����� �������
	return normalDistribution(randomGen);
}