#include <iostream>
using namespace std;

class Test {
    int a; // sshould be initialized first
    int b;
    public : 

    // Test(int i , int j): a(i), b(j)
    // Test(int i , int j): a(i), b(i+j)
    // Test(int i , int j): a(i), b(2*j)
    // Test(int i , int j): a(i), b(a+ j)
    Test(int i , int j): b(j), a(i+b)//throws a garbage value but if int b is written before int a then it will show desired values

     {
    //     a=i; can also be used to initialize this
    //     b=j;
        cout<<"constructor executed"<<endl;
        cout<<"Value of a is "<<a<<endl;
        cout<<"Value of b is "<<b<<endl;

    }
};

int main(){
Test t(4,8);
return 0;
}