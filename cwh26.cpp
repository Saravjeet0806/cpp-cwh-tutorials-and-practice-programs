#include <iostream>
using namespace std;

class Complex
{
    int a, b;
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }
    void printNumber()
    {
        cout << "The number is " << a << " + " << b << "i" << endl;
    }
};
Complex sumComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
int main(int argc, char const *argv[])
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();
    c2.setNumber(8, 5);
    c2.printNumber();
    //c3.setNumber(2, 4);
   //c3.printNumber();

    sum= sumComplex (c1,c2);
    sum.printNumber();
    return 0;
}
