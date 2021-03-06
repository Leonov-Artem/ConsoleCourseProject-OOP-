#pragma once
#include <cmath>

class Testing
{
private:
	static void ExecuteProceduralCode(double sample_size);
	static void ExecuteObjectOrientedCode(double sample_size);

	static void DisplayTableHeader();
	static void DisplayTableRow(int row, double value);
	static void DisplayTableFooter(double average_time);
public:
	static void DisplayTestTableProceduralApplication(double sample_size, int amount_tests);
	static void DisplayTestTableObjectOrientedApplication(double sample_size, int amount_tests);

	static double ProceduralApplication(double sample_size, int amount_tests);
	static double ObjectOrientedApplication(double sample_size, int amount_tests);

	static void DisplayAverageResultsProceduralApplication();
	static void DisplayAverageResultsObjectOrientedApplication();
};

