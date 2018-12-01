#include <iostream>
#include <string>

class base{
public:
  base(std::string name_in,int quantity_in);
  // ~base();
  friend std::ostream& operator<<(std::ostream& os, const base& other);

protected:
  std::string name;
  int quantity;

};
