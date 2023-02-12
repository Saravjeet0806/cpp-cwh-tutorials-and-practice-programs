#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



   int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
  
   int N;
     cin>>N;
    int arr[N];
//cout<<"Enter the no of terms";

  
    for(int i=0; i<N; i++)
    {
    // cout<<"enter the numbers";
        cin>>arr[i];
    }
    
    for (int j=N-1; j>=0; j--)
    {
        cout<<arr[j]<<" ";
    
    }
    return 0;
}
