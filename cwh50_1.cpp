#include <iostream>
using namespace std;
int main(){
int *arr= new int [3];
arr[0]=10;
arr[1]=20;
//*(arr+1)=20;   will also show same result as arr[1]
arr[2]=30;
//delete [] arr;

/*
if we use the above delete keyword before printing the values... the space used by the array gets free
and we get garbage value in return instead of 10,20,30
*/
cout<<"The value of arr[0] is "<<arr[0]<<endl;
cout<<"The value of arr[1] is "<<arr[1]<<endl;
cout<<"The value of arr[2] is "<<arr[2]<<endl;
return 0;
}