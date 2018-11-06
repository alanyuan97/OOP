#include <iostream>

class polynomial{
  public:
    polynomial();
    polynomial(int d);

    double& at(int i) const;
    double get_degree() const;
    double& operator[](int i);
    friend std::ostream& operator<<(std::ostream& os,const polynomial& p);

  private:
    double* coefficients;
    int degree;
};
