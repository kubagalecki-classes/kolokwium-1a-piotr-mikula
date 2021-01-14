#include "zad1.hpp"

#include <memory>
#include <string>
#include <type_traits>

// tutaj klasa Penne
class Penne : public Makaron
{
  public:
    virtual double ileMaki(unsigned P) const override
  {
    return (double)P;
  }
  private:
};

// tutaj definicja metody gotujMakaron
static Makaron* Makaron::gotujMakaron(const std::string& str)
{
  auto it = str.front();
  auto it2 = str.back();

  if(it == it2)
    return new Tagliatelle{3.14, 0.42, 0.1} 
  else
    return new Penne{}
}


/*



*/