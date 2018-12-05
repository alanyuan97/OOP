#ifndef WARRIOR_HPP
#define WARRIOR_HPP

#include <string>

class warrior{
public:
  warrior(std::string name_in,int strengh_in,int lifepoint_in):name(name_in),strength(strengh_in),lifepoint(lifepoint_in){};
  std::string get_name()const;
  void set_name(std::string name_in);
  void be_attacked(int damage);
  virtual void attack() = 0;
protected:
  std::string name;
  int strength;
  int lifepoint;
};

#endif
