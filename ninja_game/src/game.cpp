#include <cstdlib>
#include <ctime>
#include <iostream>

#include "game.hpp"

game::game(){}

game::~game(){
  std::cout<<"Game() is leaving"<<std::endl;
  for (int i=0;i<good_warrior.size();i++){
    delete good_warrior[i];
  }
  for (int i=0;i<bad_warrior.size();i++){
    delete bad_warrior[i];
  }
}


void game::add_good_warrior(warrior* w){
  good_warrior.push_back(w);
}

void game::add_bad_warrior(warrior* w){
  bad_warrior.push_back(w);
}

void game::run(){
  std::cout<<"good_warrior size"<<good_warrior.size()<<std::endl;
  std::cout<<"bad_warrior size"<<bad_warrior.size()<<std::endl;
  if (good_warrior.size()!=bad_warrior.size()){
    std::cout<<"unfair battle"<<std::endl;
  }
  else {
    std::cout<<"battle start:"<<std::endl;
    int n=good_warrior.size();
    srand(time(NULL));
    for (int i=0; i<n;i++){
      std::cout<<"******Round "<<i<<"*****"<<std::endl;
      int index_good=rand()%n;
      good_warrior[index_good]->attack(bad_warrior[index_good]);
      int index_bad=rand()%n;
      bad_warrior[index_bad]->attack(good_warrior[index_bad]);
    }
  }
}
