#include <iostream>
#include "label_point.hpp"

using namespace std;

label_point::label_point(double x_in , double y_in,string label_in):x(x_in),y(y_in),label(label_in){}

label_point::label_point(){
  label_point (0.0,0.0,"NONE");
}

label_point::~label_point(){
  std::cerr <<*this<<"/* error message label_point is now leaving ! */" << '\n';
}

double label_point::get_x() const{
    return x;
}
double label_point::get_y() const{
    return y;
}

string label_point::get_label()const{
  return label;
}

double label_point::get_distance_to_origin()const{
  return distance;
}

int label_point::get_index(){
  return index;
}

void label_point::update_distance_to_origin(){
  distance= sqrt(x*x+y*y);
}

void label_point::set_x(double x_in){
  x= x_in;
  update_distance_to_origin();
}
void label_point::set_y(double y_in){
  y= y_in;
  update_distance_to_origin();
}

void label_point::set_label(string input){
  label=input;
}

void label_point::display()const{
  cout<<"("<<x<<","<<y<<") with label "<<label<<"  "<<endl;
}

double label_point::distance_from_point(const label_point& other)const{
  double delta_x=x-other.get_x();
  double delta_y=y-other.get_y();

  return sqrt(delta_x*delta_x+delta_y*delta_y);
}
void label_point::symetric(){
  x=-x;
  y=-y;
}

void label_point::translate(const label_point& other){
  x+=other.get_x();
  y+=other.get_y();
  update_distance_to_origin();
}

bool operator==(const label_point& p1,const label_point& p2){
  return (p1.x==p2.x) && (p1.y==p2.y) && (p1.label==p2.label);
}
bool operator!=(const label_point& p1,const label_point& p2){
  return (p1.x!=p2.x) || (p1.y!=p2.y)||(p1.label==p2.label);
}
bool operator<(const label_point& p1,const label_point& p2){
  return (p1.x<p2.x) && (p1.y<p2.y);
}
bool operator>(const label_point& p1,const label_point& p2){
  return (p1.x>p2.x) && (p1.y>p2.y);
}
std::ostream & operator<<(std::ostream& os,const label_point& p){
  os<<"("<<p.x<<","<<p.y<<") wtih label "<<p.label;
  return os;
}
