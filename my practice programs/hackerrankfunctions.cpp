#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{
if(a>b&&a>c&&a>d)
{
        cout<<a;
        return(a);
}
else if(b>a&&b>c&&b>d)
{
        cout<<b;
        return(b);
}
else if(c>b&&c>a&&c>d)
{
        cout<<c;
         return(c);
}  
else
{
        cout<<d;
        return(d);
}
}
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int main() {
    int a, b, c, d,max;
    scanf("%d %d %d %d", &a, &b, &c, &d);
   max=max_of_four(a,b,c,d);
}
