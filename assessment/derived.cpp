#include <iostream>
#include <string>
#include "derived.hpp"

derived::derived(std::string name_in,int quantity_in,std::string restricted_in):base(name_in,quantity_in),restricted(restricted_in){}

std::ostream& derived::display(std::ostream& os){
  os<<name<<" ("<<quantity<<") ["<<restricted<<"]"<<std::endl;
  return os;
}

bool operator<(const derived& a,const derived& b){
  if(a.quantity<b.quantity){
    return true;
  }
  else{
    return false;
  }
}

bool operator>(const derived& a,const derived& b){
  if(a.quantity>b.quantity){
    return true;
  }
  else{
    return false;
  }
}
