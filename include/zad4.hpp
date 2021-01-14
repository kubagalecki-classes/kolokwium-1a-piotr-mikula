#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake
obliczMake(const std::vector<Tagliatelle>& tvec)
{
  double M = 0.0;
  int size = tvec.size();
  for(auto element : tvec)
  {
    M += (element.ileMaki(size));
    size--;
  }

  if(M > 100)
    throw(14);
  else if((M > 50) && (M <= 100))
    throw(0.5);
  else if (M <= 50)
    return M;
}