#pragma once

static class Testing
{
private:
	static void ExecuteProceduralCode(double sample_size, int amount_tests);
	static void ExecuteObjectOrientedCode(double sample_size, int amount_tests);
public:
	static void DisplayTestTableProceduralApplication(double sample_size, int amount_tests);
	static void DisplayTestTableObjectOrientedApplication(double sample_size, int amount_tests);

	static double ProceduralApplication(double sample_size, int amount_tests);
	static double ObjectOrientedApplication(double sample_size, int amount_tests);
};

