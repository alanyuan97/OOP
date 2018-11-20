#include <iostream>
#include <string>
#include "label_point.hpp"

using namespace std;

int main (){
  label_point lp1(2,3,"hello");
  label_point lp2(2,3,"hello");
  cout<<"lp1 == lp2 "<<(lp1==lp2)<<endl;
  cout<<lp1<<endl;
  return 0;
}
