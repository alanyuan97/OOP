#ifndef NINJA_HPP
#define NINJA_HPP
#include "warrior.hpp"
#include <string>

class ninja:public warrior{
public:
  ninja(std::string n){name=n;}
  virtual void attack();
  virtual void attack(warrior*);
};


#endif
