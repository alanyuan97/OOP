#include <iostream>
#include <list>
#include <algorithm>
//no [] operator allowed here
using namespace std;

int main (){
  list<int> l;
  l.push_back(1);
  l.push_back(3);
  l.push_back(2);
  list<int>::iterator it=l.begin();
  it++;
  it++;
  l.insert(it,15);
  for (list<int>::iterator it =l.begin();it!=l.end();++it){
    cout<<*it<<endl;
  }
  l.sort();
  for (list<int>::iterator it =l.begin();it!=l.end();++it){
    cout<<*it<<endl;
  }
  return 0;
}
