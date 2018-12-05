#include <string>
#include <iostream>
#include "samurai.hpp"

void samurai::attack(){
  std::cout<<name<<" samurai attacks."<<std::endl;
  srand(time(NULL));
  int damage=rand%strength;
  enemy->be_attacked(damage);
  std::cout<<"Samurai has strenth"<<strength<<" and lifepoint "<<lifepoint<<std::endl;
}
