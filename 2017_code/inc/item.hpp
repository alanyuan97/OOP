#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>
#include <iostream>

class item{
protected:
  int quantity;
  std::string name;
public:
  item(int quantity_in,std::string name_in);
  virtual ~item(){};
  friend std::ostream& operator<<(std::ostream& os,item& input);
  friend bool operator<(const item& c1,const item& c2);
  friend item& operator+(item& c1,item& c2);
  item& operator=(const item& other);
  virtual std::ostream& print(std::ostream& os)=0;

};

#endif
