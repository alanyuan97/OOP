#include <iostream>
#include <string>
#include <list>
#include <algorithm>
#include <fstream>
#include "item.hpp"
#include "res.hpp"
#include "unres.hpp"
using namespace std;

void printall(list<item*> listin){
  list<item*>::iterator it;
  for (it=listin.begin();it!=listin.end();++it){
    cout<<**it<<endl;
  }
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

  unrestrictedlist.sort();
  printall(unrestrictedlist);
  restrictedlist.sort();
  printall(restrictedlist);

  return 0;

}
