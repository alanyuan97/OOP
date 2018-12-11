#include <iostream>
#include <string>

class base{
public:
  base(std::string name_in,int quantity_in);
  // ~base();
  friend std::ostream& operator<<(std::ostream& os,base& other);
  bool operator<(const base& a)const;
  virtual std::ostream& display(std::ostream& os);
protected:
  std::string name;
  int quantity;

};
