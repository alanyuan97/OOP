#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <stdexcept>
using namespace std;

double my_sqrt(double n){
  double result;
  if(n<0){
    throw string("cannont complete negative sqrt");
  }
  result=sqrt(n);
  if(isnan(result)){
    throw string("cannot complete sqrt");
  }
  return result;
}

int main(){
  vector<int> v(3);
  int i,number;
  double result;
  cin>>i;
  cin>>number;

  try {
    cout<<v.at(i)<<endl;
    result=my_sqrt(number);
    cout<<result<<endl;
  }
  catch(const out_of_range& a){
    cout<<"be careful with bounds"<<endl;
  }
  catch (const string& exception){
    cout<<exception<<endl;
  }
  std::cerr << "/* error message */" << '\n';

  return 0;
}
