#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(std::vector<Tagliatelle> tvec)
{
	double M = 0.0;
	int i = 0;
	for (auto it = tvec.rbegin(); it != tvec.rend(); it++)
	{
		i++;
		M += it->ileMaki(i);
	}
	if (M > 100) 
	{
		int a = 14;
		throw(a);
	}
	else if ((M > 50) && (M <= 100))
	{
		double b = 27.5;
		throw(b);
	}
	else if (M <= 50)
	{
		return M;
	}
}