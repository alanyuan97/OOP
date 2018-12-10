#ifndef DVD_HPP
#define DVD_HPP

#include <iostream>
#include <string>
#include "item.hpp"

class dvd:public item{
public:
  dvd(std::string itemname_in,bool state_in);
  virtual std::ostream& display(std::ostream& os);
  virtual void borrow(std::string namein);
};

#endif
