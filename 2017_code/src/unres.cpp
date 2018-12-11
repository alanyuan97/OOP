#include <iostream>
#include <string>
#include "unres.hpp"

unrestrict::unrestrict(int quantity_in,std::string name_in):item(quantity_in,name_in){}

std::ostream& unrestrict::print(std::ostream& os){
  os<<name<<" ( "<<quantity<<")"<<std::endl;
  return os;
}
