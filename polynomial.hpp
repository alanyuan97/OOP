#include <iostream>

class polynomial{
  public:
    polynomial();
    polynomial(int d);
    polynomial(const polynomial& other);
    ~polynomial();
    void get_degree();
    double& at(int i);
    double get_degree() const;
    double& operator[](int i);
    const double& operator[](int i)const;
    friend std::ostream& operator<<(std::ostream& os,const polynomial& p);

  private:
    double* coefficients;
    int degree;
};
