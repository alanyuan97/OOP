#include "dvd.hpp"
#include "item.hpp"
#include <string>

dvd::dvd(std::string itemname_in,bool state_in):item(itemname_in,state_in){}

std::ostream& dvd::display(std::ostream& os){
  os<<"dvd: "<<itemname;
  return os;
}

void dvd::borrow(std::string namein){
  if (state){
    throw std::string("not availible at the moment");
  }
  state=true;
  date=date+7;
  borrowname=namein;
}
