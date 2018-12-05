#ifndef SAMURAI_HPP
#define SAMURAI_HPP
#include "warrior.hpp"

class samurai:public warrior{
public:
  samurai(std::string n){name=n;}
  virtual void attack();
};

#endif
