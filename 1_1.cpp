#include <cmath>
#include <iostream>
#include <string>
using namespace std;

class point {
  private:
    int x,y ;
    double distance ;
    string output ;
  public:
    void distance_from_origin ();
    void distance_from_point(double X, double Y);
    void display();
    void change_coordinates_symetirc();
    void set(double x_in,double y_in);
    void translate(point p2);
    double get_x();
    double get_y();
};

void point::distance_from_origin(){
  distance = sqrt(x*x+y*y);
};

void point::distance_from_point(double X, double Y){
  distance = sqrt ((x-X)*(x-X)+(y-Y)*(y-Y));
}

void point::display(){
  //cout<<"distance : "<<"("<<to_string(x)<<" , "<<to_string(y)<<")"<<endl;
  //cout<<"distance : "<<distance<<endl;
  cout<<"point coordinates  : "<<"("<<to_string(x)<<" , "<<to_string(y)<<")"<<endl;
}

void point::set(double x_in,double y_in){
  x= x_in;
  y= y_in;
}
void point::change_coordinates_symetirc(){
  x=-x;
  y=-y;
}
void point::translate(point p2){
  x=x+p2.x;
  y=y+p2.y;
}
double point::get_x(){
    return x;
}
double point::get_y(){
    return y;
}

int main() {
  point p1,p2;
  p1.set(1,2);
  p2.set(3,4);

  p1.distance_from_origin();
  //p1.distance_from_point(6,8);
  //this line returns the value from any point
  //p1.change_coordinates_symetirc();
  p1.translate(p2);
  p1.display();

  return 0;
}
