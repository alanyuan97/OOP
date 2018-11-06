#include <iostream>
#include "polynomial.hpp"
using namespace std;

int main (){
  std::cerr << "******************* TEST ONE *********************" << '\n';
  polynomial p(2);
  p.at(0)=2;
  p.at(1)=3;
  p.at(2)=1;
  cout<<p<<endl;
  std::cerr << "******************* TEST TWO *********************" << '\n';
  polynomial p1(p);
  cout<<"default copy constructor => p1:\n"<<p1<<endl;
  std::cerr << "******************* TEST THREE *********************" << '\n';
  polynomial p2=p;
  cout<<"default assign => p2:\n"<<p2<<endl;
  std::cerr << "******************* TEST FOUR *********************" << '\n';
  p=p;
  polynomial p3=p;
  cout<<"self copy => p3:\n"<<p3<<endl;
  p.at(0)=1;
  p.at(1)=2;
  p.at(2)=4;
  cout<<"P:\n"<<p<<endl;
  cout<<"p3:\n"<<p3<<endl;
  std::cerr << "******************* TEST FOUR *********************" << '\n';
  polynomial p4=p2=p1;
  cout<<"chain assign => p4:\n"<<p4<<endl;

  return 0;
}
