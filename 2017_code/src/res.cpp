#include <iostream>
#include <string>
#include "res.hpp"

restrict::restrict(int quantity_in,std::string name_in,std::string code_in):item(quantity_in,name_in),code(code_in){}

std::ostream& restrict::print(std::ostream& os){
  os<<name<<" ( "<<quantity<<") ["<<code<<"]"<<std::endl;
  return os;
}
