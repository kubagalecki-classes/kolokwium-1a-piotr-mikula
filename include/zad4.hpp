#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
double obliczMake(std::vector<Tagliatelle> tvec)
{
	double M = 0.0;
	temp i = 0;
	for (auto it = tvec.rbegin(); it != tvec.rend(); it++)
	{
		temp++;
		M += it->ileMaki(temp);
	}
	if (M > 100) 
	{
		int a = 14;
		throw(a);
	}
	else if ((M > 50) && (M <= 100))
	{
		double b = 10.5;
		throw(b);
	}
	else if (M <= 50)
	{
		return M;
	}
}