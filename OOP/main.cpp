#include <iostream>
#include <string>
#include "point.hpp"
#include "triangle.hpp"
using namespace std;

int member_point_unordsearch(vector<point> input, point compareinput){
  for (int i=0 ; i<input.size() ; i++){
    if (input[i]==compareinput){
      return i;
    }
  }
  return input.size();
}

int member_point_binsearch(vector<point> input, point compareinput){
  int output=input.size();
  //assuming that the vector is ordered
  int halfindex=input.size();
  vector<point> temp;
  while (input.size()!=1){
    halfindex=(halfindex-1)/2;
    std::cerr << "/* error message */" <<halfindex<< '\n';
    if (input[halfindex]>compareinput){
      for (int i =0;i<halfindex;i++){
        temp.push_back(input[i]);
        std::cerr << "input i " <<input[i]<< '\n';
      }
    }
    else if (input[halfindex]<compareinput){
      for (int i =0;i<halfindex;i++){
        temp.push_back(input[halfindex+1+i]);
        std::cerr << "input halfindex " <<input[halfindex+1+i]<< '\n';
      }
    }
    else if(input[halfindex]==compareinput) {
      return halfindex;
    }
    input.clear();
    input=temp;
    temp.clear();
    for (int i=0;i<input.size();i++){
      std::cerr << "output now is " <<input[i]<< '\n';
    }
  }
  if (input[0]!=compareinput){
    return output;
  }
  else {
    return input[0].get_index();
  }
}

int function_switch(vector<point> input, point compareinput,bool order){
  if (order){
    return member_point_binsearch(input,compareinput);
  }
  else {
    return member_point_unordsearch(input,compareinput);
  }
}

int main (){
  int number,result;
  bool order=false;
  string readin;
  double x,y;
  cout<<"--------------------------------------PART 1 -----------------------------"<<endl;
  //cout<<"(p1==p2):  "<<(p1==p2)<<endl;
  vector<point> testing;
  cout<<"Enter the number of input points"<<endl;
  cin >> number;
  for (int i=0;i<number;i++){
    cout<<"Enter the point"<<endl;
    cin >>x>>y;
    point p(x,y,i);
    testing.push_back(p);
    for (int i=0;i<testing.size();i++){
      cout<<"point vector now is"<<testing[i]<<endl;
    }
  }
  cout<<"Enter a point to search"<<endl;
  cin >>x>>y;
  point p1(x,y,0);
  cout<<"Is this an ordered sequence? Y/N"<<endl;
  cin>>readin;
    if (readin=="Y"){
      order=true;
    }
    else {
      order=false;
    }
  // result=member_point_binsearch(testing,p1);
  result=function_switch(testing,p1,order);
  cout<<"Result = "<<result<<endl;
  // cout<<"#PART 2 --------------------------------"<<endl;
  // triangle t1(p1,p2,p3);
  // t1.update_perimeter();
  // t1.display();

  return 0;
}
