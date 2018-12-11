#include <iostream>
#include <string>
#include "base.hpp"


base::base(std::string name_in,int quantity_in):name(name_in),quantity(quantity_in){}

// base::~base(){
//   std::cout<<"base is now leaving"<<std::endl;
// }

std::ostream& operator<<(std::ostream& os, base& other){
  return other.display(os);
}

bool base::operator<(const base& a)const{
  return (this->quantity<a.quantity);
}

std::ostream& base::display(std::ostream& os){
  os<<name<<" ("<<quantity<<")"<<std::endl;
  return os;
}
