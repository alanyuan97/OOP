#include <iostream>
#include <cmath>
#include <vector>
#include <string>
class label_point {
  public:
    //constructors
    label_point (double x_in, double y_in,std::string label_in);
    label_point();
    ~label_point();

    //access member functions
    double get_x() const ;
    double get_y() const ;
    std::string get_label() const;
    double get_distance_to_origin() const ;
    int get_index();
    //mutators member functions
    void set_x(double x_in );
    void set_y(double y_in );
    void set_label(std::string input);

    void display()const;
    double distance_from_point(const label_point& other) const ;

    void symetric();
    void translate(const label_point& other );

    //operator overloading
    friend bool operator==(const label_point& p1,const label_point& p2);
    friend bool operator!=(const label_point& p1,const label_point& p2);
    friend bool operator<(const label_point& p1,const label_point& p2);
    friend bool operator>(const label_point& p1,const label_point& p2);
    friend std::ostream & operator<<(std::ostream& os, const label_point& p);
  private:
    double x,y;
    double distance;
    int index;
    std::string label;
    void update_distance_to_origin();
};
