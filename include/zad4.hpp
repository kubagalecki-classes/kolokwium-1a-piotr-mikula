#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
obliczMake(const std::vector<Tagliatelle>& tvec)
{
  double M = 0.0;
	int temp = 0;
	for (auto it = tvec.rbegin(); it != tvec.rend(); it++)
	{
		temp++;
		M += it->ileMaki(i);
	}

  if(M > 100)
    throw(14);
  else if((M > 50) && (M <= 100))
    throw(0.5);
  else if (M <= 50)
    return M;
}