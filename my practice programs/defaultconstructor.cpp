#include <iostream>
using namespace std;

class construct{
    public :
    int a ,b;
    //default constructor
    construct(){
        a=10 ;
        b=20;
    }
};
int main()
{
    //default constructors are called automatically 
    //when the object is created
    construct c;
    cout<<"a: "<<c.a<<endl<<"b: "<<c.b;
    return 1;
}
