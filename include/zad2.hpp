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
Makaron* Makaron::gotujMakaron(const std::string& str)
{
  if(str.front() == str.back())
    return new Tagliatelle{3.14, 0.42, 0.1} 
  else
    return new Penne{}
}
