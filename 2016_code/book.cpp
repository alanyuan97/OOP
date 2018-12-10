#include "book.hpp"
#include "item.hpp"
#include <string>
#include <iostream>

book::book(std::string itemname_in,bool state_in):item(itemname_in,state_in){}

std::ostream& book::display(std::ostream& os){
  os<<"book: "<<itemname;
  return os;
}

void book::borrow(std::string namein){
  if (state){
    throw std::string("not availible at the moment");
  }
  state=true;
  date=date+14;
  borrowname=namein;
}
