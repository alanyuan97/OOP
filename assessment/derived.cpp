#include <iostream>
#include <string>
#include "derived.hpp"

derived::derived(std::string name_in,int quantity_in,std::string restricted_in):base(name_in,quantity_in),restricted(restricted_in){}

std::ostream& operator<<(std::ostream& os, const derived& other){
  os<<other.name<<" "<<other.quantity<<" with authority access to "<<other.restricted<<std::endl;
  return os;
}
