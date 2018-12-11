#include <iostream>
#include <string>
#include "item.hpp"

item::item(int quantity_in,std::string name_in):quantity(quantity_in),name(name_in){}

std::ostream& operator<<(std::ostream& os,item& input){
  return input.print(os);
}

bool operator<(const item& c1,const item& c2){
  return (c1.quantity<c2.quantity);
}
