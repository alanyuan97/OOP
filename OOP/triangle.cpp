#include <iostream>
#include "point.hpp"
#include "triangle.hpp"

using namespace std;

triangle::triangle(point a ,point b, point c){
  p1=a;
  p2=b;
  p3=c;
}
double triangle::get_perimeter()const{
  return perimeter;
}
void triangle::display()const{

  cout<<"The perimeter for this triangle is "<<perimeter<<endl;
}
void triangle::translate(const point& input ){
  p1.translate(input);
  p2.translate(input);
  p3.translate(input);
}
void triangle::update_perimeter(){
  perimeter=p1.distance_from_point(p2)+p2.distance_from_point(p3)+p3.distance_from_point(p1);
}
