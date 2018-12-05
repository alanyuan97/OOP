#include <vector>
#include <iostream>
using namespace std;

template <class TYPE>
void print_vector(const vector<TYPE>& v){
  vector<TYPE>::iterator it;
  for (it=v.begin();it!=v.end();++it){
    cout<<*it<<endl;
  }
}

int main(){
  vector<double> vlist;
  vlist.push_back(1.2);
  vlist.push_back(2.4);
  vlist.push_back(3.6);
  print_vector(vlist);

  return 0;

}
