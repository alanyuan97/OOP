#include <iostream>
#include <string>
#include "base.hpp"

class derived:public base{
public:
  derived(std::string name_in,int quantity_in,std::string restricted_in);
  bool operator<(const derived& a)const;

  virtual std::ostream& display(std::ostream& os);
protected:
  std::string restricted;
};
