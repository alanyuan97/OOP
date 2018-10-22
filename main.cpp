#include <iostream>
#include "point.hpp"
#include "triangle.hpp"
using namespace std;

int main (){
  cout<<"##PART 1 -----------------------------"<<endl;
  point p1(0,0),p2(1,2),p3(4,5);
  cout<<"(p1==p2):  "<<(p1==p2)<<endl;

  cout<<"#PART 2 --------------------------------"<<endl;
  triangle t1(p1,p2,p3);
  t1.update_perimeter();
  t1.display();

  return 0;
}
