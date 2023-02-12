#include <iostream>
using namespace std;

class A{
    protected:
    int a;
    public :
    void set_A(){
        cout<<"Enter the value of A"<<endl;
        cin>>a;
    }
    void disp_A(){
        cout<<endl<<"Value of A= "<<a<<endl;
    }
};
class B:public A{
    int b,p;
    public: 
    void set_B(){
        set_A();
        cout<<"Enter the value of B"<<endl;
        cin>>b;
    }
    void cal_product(){
        p=a*b;
        cout<<endl<<"Product of "<<a<<" * "<<b<<" = "<<p;
    }
};
int main(int argc, char const *argv[])
{
    B obj;
    obj.set_B();
    obj.cal_product();
    return 0;
}
