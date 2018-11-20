#include "polynomial.hpp"

using namespace std;

polynomial::polynomial(){
  degree = 0;
  coefficients = new double[degree+1];
}

polynomial::polynomial(int d){
  degree = d ;
  coefficients = new double[degree+1];

  for (int i=0 ;i<degree; i++){
    coefficients[i]=0.0;
  }
  //initializing double vector now
}

polynomial::polynomial(const polynomial& other){
  degree=other.degree;
  coefficients= new double [degree+1];
  for (int i=0 ;i<=degree; i++){
    coefficients[i]=other[i];
  }
}

polynomial& polynomial::operator=(const polynomial& other){
  if (&other!=this){
    delete []coefficients;

    degree= other.degree;
    coefficients= new double [degree+1];

    for (int i =0 ;i<=degree,i++){
      coefficients[i]=other[i];
    }
  }
}

polynomial::~polynomial(){
  cout<<"coefficients leaving"<<endl;
  delete [] coefficients;
}
//user defined copy constructor
void polynomial::get_degree(){
  cout<<"getting degree"<<degree<<endl;
}

double& polynomial::at(int i) {
  return coefficients[i];
}
//allows the main to assign values to coefficients[]

double& polynomial::operator[](int i){
  return coefficients[i];
}

const double& polynomial::operator[](int i)const{
  return coefficients[i];
}
//overloading operator[]
double polynomial::get_degree() const{
  return degree;
}

std::ostream& operator<<(std::ostream& os,const polynomial& p){
  for (int i=0;i<=p.degree;i++){
    os<<"coefficients["<<i<<"] = "<<p.coefficients[i]<<std::endl;
  }
  return os;
}
