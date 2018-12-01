#include <iostream>
#include <string>
#include "base.hpp"

class derived:public base{
public:
  derived(std::string name_in,int quantity_in,std::string restricted_in);
  friend std::ostream& operator<<(std::ostream& os, const derived& other);
protected:
  std::string restricted;
};
