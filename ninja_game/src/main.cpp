#include "game.hpp"
#include "warrior.hpp"
#include "ninja.hpp"
#include "samurai.hpp"

int main(){
  warrior* gw1 = new ninja("Bruce Lee");
  warrior* gw2 = new ninja("Jackie Chan");
  warrior* gw3 = new samurai("Jet Li");
  warrior* gw4 = new samurai("Chuck Norris");

  warrior* bw1 = new ninja("Evil Ninja");
  warrior* bw2 = new ninja("Ninja assassin");
  warrior* bw3 = new samurai("Evil Mind");
  warrior* bw4 = new samurai("Evil Sword");

  game g;

  g.add_good_warrior(gw1);
  g.add_good_warrior(gw2);
  g.add_good_warrior(gw3);
  g.add_good_warrior(gw4);

  g.add_bad_warrior(bw1);
  g.add_bad_warrior(bw2);
  g.add_bad_warrior(bw3);
  g.add_bad_warrior(bw4);

  g.run();

  return 0;
}
