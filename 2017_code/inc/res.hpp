#ifndef RES_HPP
#define RES_HPP
#include <string>
#include <iostream>
#include "item.hpp"

class restrict:public item{
public:
  restrict(int quantity_in,std::string name_in,std::string code_in);
  // virtual ~restrict();
  virtual std::ostream& print(std::ostream& os);
protected:
  std::string code;
};

#endif
