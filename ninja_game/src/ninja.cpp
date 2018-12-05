#include <string>
#include <iostream>
#include "ninja.hpp"

void ninja::attack(){
  std::cout<<name<<" ninja attacks."<<std::endl;
}
void ninja::attack(warrior* enemy){
  std::cout<<name<<"ninja attacks."<<std::endl;
  srand(time(NULL));
  int damage=rand%strength;
  enemy->be_attacked(damage);
  std::cout<<"Ninja has strenth"<<strength<<" and lifepoint "<<lifepoint<<std::endl;
}
