#ifndef GAME_HPP
#define GAME_HPP
#include <vector>
#include "warrior.hpp"

class game{
public:
  game();
  ~game();
  void add_good_warrior(warrior* w);
  void add_bad_warrior(warrior* w);
  void run();

private:
  std::vector<warrior*> good_warrior;
  std::vector<warrior*> bad_warrior;

};

#endif
