#include "Testing.h"
#include "Figure.h"
#include "Figure2.h"
#include "table_printer.h"
#include <ctime>

using namespace System;

// clock() - замеряет время в миллисекундах

void Testing::ExecuteProceduralCode(double sample_size, int amount_tests)
{
	using namespace ProceduralProject;
	PointD b{ -12, 0 };
	PointD d{ -6, 2 };

	Figure figure;
	figure = CreateFigure(b, d);

	double exact_area = figure.ExactAreaValue;
	double monte_carclo = СalculateMonteCarlo(figure, sample_size);
}
void Testing::ExecuteObjectOrientedCode(double sample_size, int amount_tests)
{
	using namespace ObjectOrientedProject;
	PointD b(-12, 0), d(-6, 2);
	Figure figure(b, d);

	double ExactAreaValue = figure.ExactAreaValue();
	double monteCarlo = figure.MonteCarloAlgorithm(sample_size);
}

double Testing::ProceduralApplication(double sample_size, int amount_tests)
{
	unsigned int average_time = 0;

	for (int i = 0; i < amount_tests; i++)
	{
		unsigned int start_time = clock();
		ExecuteProceduralCode(sample_size, amount_tests);
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
		ExecuteObjectOrientedCode(sample_size, amount_tests);
		unsigned int end_time = clock();

		average_time += end_time - start_time;
	}

	return average_time / amount_tests / 1000.0;
}

void Testing::DisplayTestTableProceduralApplication(double sample_size, int amount_tests)
{
	using namespace bprinter;
	TablePrinter tp(&std::cout);
	tp.AddColumn("Номер теста", 11);
	tp.AddColumn("Время (с.)", 10);
	tp.PrintHeader();

	unsigned int average_time = 0;

	for (int i = 0; i < amount_tests; i++)
	{
		unsigned int start_time = clock();
		ExecuteProceduralCode(sample_size, amount_tests);
		unsigned int end_time = clock();
		average_time += end_time - start_time;
		
		tp << i + 1 << (end_time - start_time) / 1000.0;
	}

	tp.PrintFooter();
	tp << "Ср. время:" << average_time / amount_tests / 1000.0;
}
void Testing::DisplayTestTableObjectOrientedApplication(double sample_size, int amount_tests)
{
	unsigned int average_time = 0;

	for (int i = 0; i < amount_tests; i++)
	{
		unsigned int start_time = clock();
		ExecuteObjectOrientedCode(sample_size, amount_tests);
		unsigned int end_time = clock();

		average_time += end_time - start_time;
	}

	//return average_time / amount_tests / 1000.0;
}
