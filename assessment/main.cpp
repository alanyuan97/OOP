#include <iostream>
#include <string>
#include <vector>
#include "derived.hpp"
using namespace std;

int main (){
  // base b1("Ben",4);
  // cout<<b1<<endl;
  // base b2("Alan",5);
  // cout<<b2<<endl;
  vector<base*> input;
  base* ptr=new base("Ben",4);
  input.push_back(ptr);
  base* ptr1=new derived("Alan",5,"Hello");
  input.push_back(ptr1);

  for (int i=0;i<input.size();i++){
    cout<<"input["<<i<<"] as "<<*input[i]<<endl;
  }

  for (int i=0;i<input.size();i++){
    delete input[i];
  }

  return 0;
}
