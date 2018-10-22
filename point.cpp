#include <iostream>
#include "point.hpp"

using namespace std;

point::point(double x_in , double y_in):x(x_in),y(y_in){}

point::point(){
  point (0.0,0.0);
}
double point::get_x() const{
    return x;
}
double point::get_y() const{
    return y;
}
double point::get_distance_to_origin()const{
  return distance;
}

void point::update_distance_to_origin(){
  distance= sqrt(x*x+y*y);
}

void point::set_x(double x_in){
  x= x_in;
  update_distance_to_origin();
}
void point::set_y(double y_in){
  y= y_in;
  update_distance_to_origin();
}
void point::display()const{
  cout<<"("<<x<<","<<y<<")"<<endl;
}
double point::distance_from_point(const point& other)const{
  double delta_x=x-other.get_x();
  double delta_y=y-other.get_y();

  return sqrt(delta_x*delta_x+delta_y*delta_y);
}
void point::symetric(){
  x=-x;
  y=-y;
}
void point::translate(const point& other){
  x+=other.get_x();
  y+=other.get_y();
  update_distance_to_origin();
}
bool operator==(const point& p1,const point& p2){
  return (p1.x==p2.x) && (p1.y==p2.y);
}
bool operator!=(const point& p1,const point& p2){
  return (p1.x!=p2.x) || (p1.y!=p2.y);
}
bool operator<(const point& p1,const point& p2){
  return (p1.distance<p2.distance);
}
std::ostream & operator<<(std::ostream& os,const point& p){
  os<<"("<<p.x<<","<<p.y<<")";
  return os;
}
