#include <iostream>
using namespace std;
int main(){
int a = 4;
int* ptr = &a;
cout<<"The value of a is "<<*(ptr)<<endl;    //* is used to dereference 

//new keyword
// int * p = new int(40);
float *p = new float (40.79);
cout<<"The value at address p is "<<*(p)<<endl;

return 0;
}