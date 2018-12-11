#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include "derived.hpp"
using namespace std;

int main (){
  list<base*> unrestrictedlist;
  list<base*> restrictedlist;
  // read from books.txt
  ifstream infile;
  string filename;

  filename="unrestricted.txt";
  infile.open(filename.c_str());
  string itemname;
  int quantity;
  while(infile>>itemname>>quantity){
    base* bptr = new base(itemname,quantity);
    unrestrictedlist.push_back(bptr);
  }
  infile.close();

  filename="restricted.txt";
  infile.open(filename.c_str());
  string code;
  while(infile>>itemname>>quantity>>code){
    base* dptr = new derived(itemname,quantity,code);
    restrictedlist.push_back(dptr);
  }
  infile.close();
  // base b1("Ben",4);
  // cout<<b1<<endl;
  // base b2("Alan",5);
  // cout<<b2<<endl;
  // base* ptr=new base("Ben",4);
  // input.push_back(ptr);
  // base* ptr1=new base("Alan",2);
  // input.push_back(ptr1);
  cout<<"unrestricted items:"<<endl;
  //sort(unrestrictedlist.begin(),unrestrictedlist.end());
  unrestrictedlist.sort();
  for (list<base*>::iterator it=unrestrictedlist.begin();it!=unrestrictedlist.end();++it){
    cout<<**it<<endl;
  }
  // for (int i=0;i<unrestrictedlist.size();i++){
  //   cout<<*unrestrictedlist[i]<<endl;
  // }
  //
  // cout<<"restricted items:"<<endl;
  // for (int i=0;i<restrictedlist.size();i++){
  //   cout<<*restrictedlist[i]<<endl;
  // }
  //
  // for (int i=0;i<restrictedlist.size();i++){
  //   delete restrictedlist[i];
  // }
  //
  // for (int i=0;i<unrestrictedlist.size();i++){
  //   delete unrestrictedlist[i];
  // }

  return 0;
}
