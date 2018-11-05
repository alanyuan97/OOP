#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include "point.hpp"
#include "triangle.hpp"
using namespace std;

int main (){
  vector<point> inputstore;
  point* ptr;
  ifstream infile;
  int n;
  double x, y;
  /*
    cout<<"a new scope begins"<<endl;
    point p1(6,7);
    point* p2 = new point (1,2);
    delete p2;
    cout<<"the new scope ends"<<'\n';
  cout<<"goodbye ! "<<'\n';
  */
  infile.open("readin.txt");
  if (!infile.is_open()){
    std::cerr << "/* error message cannot open file */" << '\n';
    exit(1);
  }
  else {
    while (infile>>x>>y){
      ptr = new point(x,y);
      inputstore.push_back(*ptr);
      delete ptr;
    }
    std::cerr << "finish reading data" << '\n';
    std::cerr << "size of vector " <<inputstore.size()<<'\n';
    std::cerr << "capacity of vector " <<inputstore.capacity()<<'\n';

  }
  for (int i =0 ;i<3;i++){
    // inputstore[i]->symetric();
    std::cout << "output vector element" <<i<<"= "<<inputstore[i]<< '\n';
  }
  infile.close();
  return 0;
}
