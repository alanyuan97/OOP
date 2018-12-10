#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
#include <iostream>

class item{

protected:
  std::string itemname;
  std::string borrowname;
  int date;

public:
  bool state;
  item (std::string itemname_in,bool state_in);
  virtual void borrow(std::string namein) = 0;
  std::string get_borrow_name();
  int get_date();
  virtual std::ostream& display(std::ostream& os);
  friend std::ostream& operator<<(std::ostream& os,item& other);
};

#endif
