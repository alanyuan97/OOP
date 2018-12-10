#include "item.hpp"
#include <string>

item::item(std::string itemname_in,bool state_in):itemname(itemname_in),state(state_in){}

std::ostream& operator<<(std::ostream& os, item& other){
  return other.display(os);
}
std::ostream& item::display(std::ostream& os){
  os<<itemname;
  return os;
}

std::string item::get_borrow_name(){
  return borrowname;
}

int item::get_date(){
  return date;
}
