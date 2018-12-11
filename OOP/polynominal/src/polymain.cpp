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
  p.at(0)=1;
  p.at(1)=2;
  p.at(2)=4;
  cout<<"user-defined copy constructor => p:\n"<<p<<endl;
  cout<<"user-defined copy constructor => p1:\n"<<p1<<endl;
  std::cerr << "******************* TEST THREE *********************" << '\n';
  polynomial p2=p;
  p.at(0)=2;
  p.at(1)=3;
  p.at(2)=1;
  cout<<"default assign => p:\n"<<p<<endl;
  cout<<"default assign => p2:\n"<<p2<<endl;

  std::cerr << "******************* TEST FOUR *********************" << '\n';
  p=p;
  cout<<"self copy => p:\n"<<p<<endl;
  p.at(0)=1;
  p.at(1)=2;
  p.at(2)=4;
  cout<<"P:\n"<<p<<endl;
  std::cerr << "******************* TEST FOUR *********************" << '\n';
  polynomial p4=p2=p1;
  cout<<"chain assign => p4:\n"<<p4<<endl;

  return 0;
}
