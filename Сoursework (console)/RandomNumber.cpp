#include "RandomNumber.h"
#include <random>
#include <cmath>

double RandomNumber::FromNormalDistribution(double min, double max)
{
	// выч. параметры норм. расп.
	double mean = (max + min) / 2;					// мат. ожидание 
	double standard_deviation = (max - min) / 6;	// СКО

	// для генерации инициализирующего начального числа
	std::random_device randomDevice;
	// Вихрь Мерсенна. ГПСЧ, основанный на св-вах простых чисел Мерсенна
	std::mt19937 randomGen(randomDevice());
	// нормальное распределение
	std::normal_distribution<double> normalDistribution(mean, standard_deviation);

	// возврат числа, округленного до двух знаков после запятой
	return normalDistribution(randomGen);
}