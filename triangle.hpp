#ifndef POINT_HPP
#define POINT_HPP

class triangle {
  private:
    point p1;
    point p2;
    point p3;
    double perimeter;
  public:
    triangle(point a,point b, point c);
    double get_perimeter()const ;
    void display()const;
    void translate(const point& input );
    void update_perimeter();
};

#endif
