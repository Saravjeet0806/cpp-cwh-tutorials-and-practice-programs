#include <iostream>
using namespace std;

class Point {
    private :
    int a, b;
    public :
    Point(int x, int y){
        a=x;
        b=y;
    }
    int getX(){
        return a;
    }
    int getY(){
        return b;
    }
};
int main()
{
    //calling the constructor
    Point p1(10,15);
    cout<<"p1.x= "<<p1.getX()<<". p1.y= "<<p1.getY();
    return 0;
}
