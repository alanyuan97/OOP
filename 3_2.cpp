#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;

class Triangle {
  public:
    void perimeter();
    Triangle(double x_in, double y_in, double z_in){
      A=x_in;
      B=y_in;
      C=z_in;
    }
    //friend double operator< (Triangle t1);
  private:
    double A,B,C;
};

class point {
  private:
    int x,y ;
    double distance ;
  public:
    void distance_from_origin();
    double distance_from_point(const point& other);
    void display() const;
    void change_coordinates_symetirc();
    void translate(point p2);
    double get_x();
    double get_y();
    point(double x_in, double y_in){
      x=x_in;
      y=y_in;
    }
    friend double operator<(const point& p1, const point& p2);
};

void point::distance_from_origin(){
  distance = sqrt(x*x+y*y);
};

double point::distance_from_point(const point& other ){
  distance = sqrt ((x-other.x)*(x-other.x)+(y-other.y)*(y-other.y));
  return distance;
}

void point::display()const{
  //cout<<"distance : "<<"("<<to_string(x)<<" , "<<to_string(y)<<")"<<endl;
  cout<<"distance : "<<distance<<endl;
  //cout<<"point coordinates  : "<<"("<<to_string(x)<<" , "<<to_string(y)<<")"<<endl;
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
void Triangle::perimeter(){
  cout<<"The distance is "<<A+B+C<<endl;
}

double operator<(const vector<point> input){
  double temp= 0.0;
  for (int i=0 ; i<2;i++){
    
    temp=input[i].distance_from_origin();
  }
}
//p1 p2 p3

int main (){
vector<point> list_of_points;
point p1(1,2);
list_of_points.push_back(p1);
point p2(3,4);
list_of_points.push_back(p2);
point p3(5,6);
list_of_points.push_back(p3);

return 0;
}
