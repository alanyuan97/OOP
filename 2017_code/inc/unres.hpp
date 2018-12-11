#ifndef UNRES_HPP
#define UNRES_HPP
#include <iostream>
#include <string>
#include "item.hpp"

class unrestrict:public item{
public:
  unrestrict(int quantity_in,std::string name_in);
  virtual std::ostream& print(std::ostream& os);
};


#endif
