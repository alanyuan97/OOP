#include <string>
#include "warrior.hpp"

std::string warrior::get_name()const{
  return name;
}

void warrior::set_name(std::string name_in){
  name=name_in;
}

void warrior::be_attacked(int damage){
  lifepoint=lifepoint-damage;
}
