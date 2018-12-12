#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <fstream>
#include "item.hpp"
#include "res.hpp"
#include "unres.hpp"
#include "hp.hpp"
using namespace std;
using namespace hp;

// template <class T>
// void printall(const list<T>& listin){
//   typename list<T>::const_iterator it;
//   for (it=listin.begin();it!=listin.end();++it){
//     cout<<**it<<endl;
//   }
// }
//
// template <class T>
// void trash(list<T>& listin){
//   typename list<T>::iterator it;
//   cout<<"deleting memory"<<endl;
//   for (it=listin.begin();it!=listin.end();++it){
//     delete *it;
//   }
// }

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

  cout<<"before sorting: "<<endl;
  printall(unrestrictedlist);
  printall(restrictedlist);
  unrestrictedlist.sort(com);
  restrictedlist.sort(com);
  cout<<"after sorting: "<<endl;
  printall(unrestrictedlist);
  printall(restrictedlist);
  list<item*>::iterator it2=unrestrictedlist.begin();
  list<item*>::iterator it1=restrictedlist.begin();
  for (it2;it2!=unrestrictedlist.end();++it2){
    **it2=**it2+**it1;
    it1++;
  }
  printall(unrestrictedlist);
  printall(restrictedlist);
  trash(unrestrictedlist);
  trash(restrictedlist);


  return 0;

}
