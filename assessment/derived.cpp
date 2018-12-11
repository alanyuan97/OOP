#include <iostream>
#include <string>
#include "derived.hpp"

derived::derived(std::string name_in,int quantity_in,std::string restricted_in):base(name_in,quantity_in),restricted(restricted_in){}

std::ostream& derived::display(std::ostream& os){
  os<<name<<" ("<<quantity<<") ["<<restricted<<"]"<<std::endl;
  return os;
}

bool derived::operator<(const derived& a)const{
  return (this->quantity<a.quantity);
}
