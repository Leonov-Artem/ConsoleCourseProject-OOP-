#include "Testing.h"
#include "Figure.h"
#include "Figure2.h"
#include "table_printer.h"
#include <ctime>
#include <string>

using namespace System;
using std::string;

using namespace bprinter;
TablePrinter tablePrinter(&std::cout);

double size[4]{ 1e3, 1e4, 1e5, 1e6 };
string strSize[4]{ "1.000", "10.000", "100.000", "1.000.000" };

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

void Testing::DisplayTableHeader()
{
	tablePrinter.AddColumn("Номер теста", 11);
	tablePrinter.AddColumn("Время (с.)", 10);
	tablePrinter.PrintHeader();
}
void Testing::DisplayTableRow(int row, double value)
{
	tablePrinter << row << value;
}
void Testing::DisplayTableFooter(double average_time)
{
	tablePrinter.PrintFooter();
	tablePrinter << "Ср. время:" << average_time;
}

void Testing::DisplayTestTableProceduralApplication(double sample_size, int amount_tests)
{
	DisplayTableHeader();

	unsigned int average_time = 0;
	for (int i = 0; i < amount_tests; i++)
	{
		unsigned int start_time = clock();
		ExecuteProceduralCode(sample_size, amount_tests);
		unsigned int end_time = clock();
		average_time += end_time - start_time;
		
		DisplayTableRow(i + 1, (end_time - start_time) / 1000.0);
	}

	DisplayTableFooter(average_time / amount_tests / 1000.0);
}
void Testing::DisplayTestTableObjectOrientedApplication(double sample_size, int amount_tests)
{
	DisplayTableHeader();

	unsigned int average_time = 0;
	for (int i = 0; i < amount_tests; i++)
	{
		unsigned int start_time = clock();
		ExecuteObjectOrientedCode(sample_size, amount_tests);
		unsigned int end_time = clock();
		average_time += end_time - start_time;

		DisplayTableRow(i + 1, (end_time - start_time) / 1000.0);
	}

	DisplayTableFooter(average_time / amount_tests / 1000.0);
}

void Testing::DisplayAverageResultsProceduralApplication()
{
	tablePrinter.AddColumn("Кол-во точек", 13);
	tablePrinter.AddColumn("Ср. время (с.)", 15);
	tablePrinter.PrintHeader();

	for (int i = 0; i < 4; i++)
		tablePrinter << strSize[i] << ProceduralApplication(size[i], 10);
}
void Testing::DisplayAverageResultsObjectOrientedApplication()
{
	tablePrinter.AddColumn("Кол-во точек", 13);
	tablePrinter.AddColumn("Ср. время (с.)", 15);
	tablePrinter.PrintHeader();

	for (int i = 0; i < 4; i++)
		tablePrinter << strSize[i] << ObjectOrientedApplication(size[i], 10);
}