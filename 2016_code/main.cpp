#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fstream>
#include <cstdlib>
#include "item.hpp"
#include "book.hpp"
#include "dvd.hpp"
using namespace std;

void printall(vector<item*> listin){
  cout<<"items: "<<endl;
  vector<item*>::const_iterator it;
  int i=0;
  for(it=listin.begin();it!=listin.end();++it){
    cout<<i<<": "<<**it;
    if (!(listin[i]->state)){
      cout<<" currently availible"<<endl;
    }
    else{
      cout<<" borrowed by "<<listin[i]->get_borrow_name()<<" until "<<listin[i]->get_date()<<"/12/2018 "<<endl;
    }
    i++;
  }
}
  // for (int i=0;i<listin.size();i++){
  //   cout<<i<<": "<<*listin[i]<<" ";
  //   if (!(listin[i]->state)){
  //       cout<<"currently availible"<<endl;
  //     }    outfile<<**it;

  //     else{
  //       cout<<"borrowed"<<listin[i]->get_borrow_name()<<"until"<<listin[i]->get_date()<<"12/2018"<<endl;
  //     }
  // }

int main(){
  vector<item*> list;
  ifstream infile;
  string filename;
  filename="book.txt";
  infile.open(filename.c_str());
  string books;
  while(infile>>books){
    item* bptr= new book(books,false);
    list.push_back(bptr);
  }
infile.close();
  filename="dvd.txt";
  infile.open(filename.c_str());
  string dvds;
  while(infile>>dvds){
    item* dptr= new dvd(dvds,false);
    list.push_back(dptr);
  }
  infile.close();
  //read and construct data
  string loop;
  do{
    printall(list);
    int index;
    string borrowcode;
    cout<<"to borrow an item please enter its index followed by the borrower’s code"<<endl;
    cin>>index>>borrowcode;
    try{
      list[index]->borrow(borrowcode);
    }
    catch (const string& exception){
        cout<<exception<<endl;
    }
    cout<<"would you like to borrow another item (y/n)"<<endl;
    cin>>loop;
  }while(loop!="n");

  printall(list);

  ofstream outfile;
  int i=0;
  outfile.open ("librarystate.txt");
  vector<item*> :: const_iterator it;
  for(it=list.begin();it!=list.end();++it){
    outfile<<**it;
    if (!(list[i]->state)){
      outfile<<" currently availible"<<endl;
    }
    else{
      outfile<<" borrowed by "<<list[i]->get_borrow_name()<<" until "<<list[i]->get_date()<<"/12/2018 "<<endl;
    }
    i++;
  }

  outfile.close();

  return 0;

}
