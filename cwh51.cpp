#include <iostream>
using namespace std;

class Complex {
    int real, imaginary;
    public:
    void getData(){
        cout<<"The real part is "<<real<<endl;
        cout<<"The imaginary part is "<<imaginary<<endl;
    }
    void setData(int a, int b){
        real =a;
        imaginary =b;

    }
};

int main(){
Complex c1,c2;
c1.setData(3,4);
c1.getData();
Complex *ptr =&c2;             //(*ptr).setData() and c1.setData are same * is used for pointer to object
(*ptr).setData(4,5);            //we can also use new keyword to make new objects eg- Complex *ptr=new Complex
(*ptr).getData();                                                                             //(*ptr).setData(4.8 ); 
Complex *p = new Complex;  
p->setData(1,54);    // ptr-> is same as *ptr
p->getData();

//Array of objects 
Complex *ptr1 = new Complex[4];
ptr1-> setData(5,6);
ptr1-> getData();
return 0;
}