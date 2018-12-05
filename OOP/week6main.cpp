#include <iostream>
#include <vector>

class Base {
public:
  Base():n_priv(0),n_prot(0){}
  Base(int n1, int n2):n_priv(n1),n_prot(n2){}
  virtual ~Base(){std::cout<<"Base(): n_priv"<<n_priv<<" and n_prot"<<n_prot<<" is now leaving!"<<std::endl;}

  void f(){std::cout<<"Base ::f "<<std::endl;}
  virtual void display(){
    std::cout<<"Base::display(): n_priv ="<<n_priv<<" , n_prot ="<<n_prot<<std::endl;
  }
  void call_all_functions(){
    std::cout<<"call all functions"<<std::endl;
    f();
    f_priv();
    f_prot();
  }

  friend std::ostream& operator<<(std::ostream& os, const Base other){
    os<<"Base with data n_priv "<<other.n_priv<<"and n_prot"<<other.n_prot;
    return os;
  }

private:
  int n_priv;
  void f_priv(){
    std::cout<<"Base:: f_priv()"<<std::endl;
  }
protected:
  int n_prot;
  void f_prot(){
    std::cout<<"Base:: f_prot()"<<std::endl;
  }
};

class Derived: public Base{
public:
  Derived ():Base(),n_base(0){}
  Derived(int n1, int n2,int n3):Base(n1,n2),n_base(n3){}
  ~Derived (){std::cout<<"Derived():n_base="<<n_base<<"is now leaving"<<std::endl;}
  void f(){std::cout<<"Derived ::f() "<<std::endl;}
  void f(int n){std::cout<<"Derived ::f(int n) with n="<<n<<std::endl;}
  void display(){std::cout<<"Derived::display(): ";Base::display();std::cout<<"n_base= "<<n_base<<std::endl;}
  void new_function(){std::cout<<"Derived::new_function()"<<std::endl;}
  // friend std::ostream& operator<<(std::ostream& os, const Derived other){
  //   os<<"Base with data n_priv ="<<other.n_priv<<"and n_prot="<<other.n_prot<<"and n_base="<<other.n_base;
  //   return os;
  // }
protected:
  int n_base;
};

class DerivedAgain: public Derived{
public:
  DerivedAgain():Derived(),n_derivedagain(0){}
  DerivedAgain(int n1,int n2,int n3,int n4):Derived(n1,n2,n3),n_derivedagain(n4){}
  ~DerivedAgain (){std::cout<<"Derivedagain():n_derivedagain="<<n_derivedagain<<"is now leaving"<<std::endl;}
  void display(){std::cout<<"Derivedagain::display(): "<<std::endl;Derived::display();std::cout<<"n_derivedagain= "<<n_derivedagain<<std::endl;}
protected:
  int n_derivedagain;
};

int main (){
  std::cout<<"---------------Test1 Base class----------------"<<std::endl;
  {
    Base b1(1,2);
    b1.display();
    Derived d1(3,4,5);
    d1.display();
  }
  // std::cout<<"n_prot is "<<d1.n_prot<<std::endl;
  //protected cannot be acessed
  std::cout<<"---------------Test2 Inherit from Derived & Base Class----------------"<<std::endl;
    {
    DerivedAgain D(3,4,5,6);
    D.display();
    }
  std::cout<<"---------------Test3 Vector of Base objects----------------"<<std::endl;
  {
  std::vector<Base> veclist;
  Base b1(1,2);
  veclist.push_back(b1);
  std::cout<<"First vector size and capacity : "<<veclist.size()<<" "<<veclist.capacity()<<std::endl;
  Base b2(3,4);
  veclist.push_back(b2);
  std::cout<<"Second vector size and capacity : "<<veclist.size()<<" "<<veclist.capacity()<<std::endl;
  std::cout<<"Printing vector components here as :----------------------------------"<<std::endl;
    for (int i=0;i<veclist.size();i++){
      std::cout<<"veclist["<<i<<"] is "<<veclist[i]<<std::endl;
    }
  }
  std::cout<<"---------------Test4 Vector of Base dynamic objects----------------"<<std::endl;
  {
    Base* b1=new Base(1,2);
    Base* b2=new Base(3,4);
    Base* d1=new Derived(3,4,5);
    std::vector<Base*> v;
    v.push_back(b1);
    v.push_back(b2);
    v.push_back(d1);
    for (int i=0;i<v.size();i++){
      v[i]->display();
    }
    for (int i=0;i<v.size();i++){
      delete v[i];
    }
  }
  return 0;
}
