#ifndef BOOK_HPP
#define BOOK_HPP

#include "item.hpp"
#include <string>

class book:public item{
public:
  book(std::string itemname_in,bool state_in);
  virtual std::ostream& display(std::ostream& os);
  virtual void borrow(std::string namein);

};

#endif
