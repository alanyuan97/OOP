#include <iostream>
#include <cmath>
#include <vector>

class point {
  public:
    //constructors
    point (double x_in, double y_in);
    point();
    ~point();

    //access member functions
    double get_x() const ;
    double get_y() const ;
    double get_distance_to_origin() const ;
    int get_index();
    //mutators member functions
    void set_x(double x_in );
    void set_y(double y_in );

    void display()const;
    double distance_from_point(const point& other) const ;

    void symetric();
    void translate(const point& other );

    //operator overloading
    friend bool operator==(const point& p1,const point& p2);
    friend bool operator!=(const point& p1,const point& p2);
    friend bool operator<(const point& p1,const point& p2);
    friend bool operator>(const point& p1,const point& p2);
    friend std::ostream & operator<<(std::ostream& os, const point& p);
  private:
    double x,y;
    double distance;
    int index;
    void update_distance_to_origin();
};
