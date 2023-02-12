#include <iostream>
using namespace std;
class Complex
{
    int a, b;
    public: 
    Complex(int, int);

    void printNumber()
    {
        cout<< "your number is "<< a <<" + "<< b<< "i" <<endl;

    }
};

Complex :: Complex(int x, int y)  // it is a parameterized constructor as it takes two parameters
{
    a=x;
    b=y;
}
int main(int argc, char const *argv[])
{
    // implicit call
    Complex a(4,6);
    // explicit call
    Complex b = Complex(5,7); 
    a.printNumber();
    b.printNumber();
    return 0;
}

