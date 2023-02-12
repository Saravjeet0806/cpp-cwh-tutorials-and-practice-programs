#include <iostream>
using namespace std;

class Point{

    int x;
    int y;
    public :
    Point (int a , int b){
        x=a ;
        y=b;

    }
    void displayPoint(){
        cout<<"The point is ("<<x<<", "<<y<<")"<<endl;


    }
};
int main(int argc, char const *argv[])
{
    Point p(1,1);
    p.displayPoint();
    Point q(3,4);
    q.displayPoint();
    return 0;
}
// Create a function (HInt: make it a freind function) which takes two point objects and computes the distance between those 2 points