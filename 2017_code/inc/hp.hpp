#include <iostream>
#include <string>
#include <list>
#include "item.hpp"
#include "res.hpp"
#include "unres.hpp"

using namespace std;

namespace hp{
  template <class T>
  inline void printall(const list<T>& listin){
    typename list<T>::const_iterator it;
    for (it=listin.begin();it!=listin.end();++it){
      cout<<**it<<endl;
    }
  }

  template <class T>
  inline void trash(list<T>& listin){
    typename list<T>::iterator it;
    cout<<"deleting memory"<<endl;
    for (it=listin.begin();it!=listin.end();++it){
      delete *it;
    }
  }

}
