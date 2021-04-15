#include <stack>

class Calculator {
  private:
    double n1;
    double n2;
    double total;
    std::stack<double> s;
  public:
    Calculator();
    ~Calculator();
    void displayFunctions();
    void showTop();
    void askFor1Num();
    void askFor2Num();
    void add();
    void subtract();
    void multiply();
    void divide();
    void find_remainder();
    void square();
    void cube();
    void power();
    void factorial();
    void percentage();
};
