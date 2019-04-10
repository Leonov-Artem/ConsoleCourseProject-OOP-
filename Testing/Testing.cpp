#include "Testing.h"
#include "Figure.h"
#include "Figure2.h"
#include <ctime>

// clock() - замеряет время в миллисекундах

double Testing::ProceduralApplication(double sample_size, int amount_tests)
{
	unsigned int average_time = 0;

	for (int i = 0; i < amount_tests; i++)
	{
		unsigned int start_time = clock();

		ProceduralProject::PointD b{ -12, 0 };
		ProceduralProject::PointD d{ -6, 2 };

		ProceduralProject::Figure figure;
		figure = CreateFigure(b, d);

		double exact_area = figure.ExactAreaValue;
		double monte_carclo = СalculateMonteCarlo(figure, sample_size);

		unsigned int end_time = clock();

		average_time += end_time - start_time;
	}

	return average_time / amount_tests / 1000.0;
}
double Testing::ObjectOrientedApplication(double sample_size, int amount_tests)
{
	unsigned int average_time = 0;

	for (int i = 0; i < amount_tests; i++)
	{
		unsigned int start_time = clock();

		ObjectOrientedProject::PointD b(-12, 0), d(-6, 2);
		ObjectOrientedProject::Figure figure(b, d);

		double ExactAreaValue = figure.ExactAreaValue();
		double monteCarlo = figure.MonteCarloAlgorithm(sample_size);

		unsigned int end_time = clock();

		average_time += end_time - start_time;
	}

	return average_time / amount_tests / 1000.0;
}
