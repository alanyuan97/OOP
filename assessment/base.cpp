#include <iostream>
#include <string>
#include "base.hpp"


base::base(std::string name_in,int quantity_in):name(name_in),quantity(quantity_in){}

// base::~base(){
//   std::cout<<"base is now leaving"<<std::endl;
// }

std::ostream& operator<<(std::ostream& os, const base& other){
  os<<other.name<<" "<<other.quantity<<std::endl;
  return os;
}
