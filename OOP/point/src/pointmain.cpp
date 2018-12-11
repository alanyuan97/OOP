#include <iostream>
#include "point.hpp"
using namespace std;

int main(){
  point p1(1,2);
  point p2=p1;
  point p3(p1);
  cout<<p1<<endl;
  cout<<p2<<endl;
  cout<<p3<<endl;

  return 0;
}
