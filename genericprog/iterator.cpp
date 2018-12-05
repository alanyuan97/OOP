#include <vector>
#include <iostream>
using namespace std;

template <class T>
void print_vector(const vector<T>& v){
  typename vector<T>::const_iterator it;
  //1st pitfall typename is needed
  //2nd pitfall const_iterator is needed
  for (it=v.begin();it!=v.end();++it){
    cout<<*it<<endl;
  }
}

int main(){
  vector<int> vlist;
  vlist.push_back(1);
  vlist.push_back(2);
  vlist.push_back(3);
  print_vector(vlist);

  return 0;

}
