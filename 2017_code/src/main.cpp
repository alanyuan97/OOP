#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <fstream>
#include "item.hpp"
#include "res.hpp"
#include "unres.hpp"
using namespace std;

template <class T>
void printall(list<T> listin){
  typename list<T>::const_iterator it;
  for (it=listin.begin();it!=listin.end();++it){
    cout<<**it<<endl;
  }
}

bool com(item*& a1,item*&a2){
  return (*a1<*a2);
}

int main(){
  list<item*> unrestrictedlist;
  list<item*> restrictedlist;
  // read from books.txt
  ifstream infile;
  string filename;

  filename="unrestricted.txt";
  infile.open(filename.c_str());
  string itemname;
  int quantity;
  while(infile>>itemname>>quantity){
    item* bptr = new unrestrict(quantity,itemname);
    unrestrictedlist.push_back(bptr);
  }
  infile.close();

  filename="restricted.txt";
  infile.open(filename.c_str());
  string code;
  while(infile>>itemname>>quantity>>code){
    item* dptr = new restrict(quantity,itemname,code);
    restrictedlist.push_back(dptr);
  }
  infile.close();

  printall(unrestrictedlist);
  unrestrictedlist.sort(com);
  printall(unrestrictedlist);
  printall(restrictedlist);
  restrictedlist.sort(com);
  printall(restrictedlist);

  return 0;

}
