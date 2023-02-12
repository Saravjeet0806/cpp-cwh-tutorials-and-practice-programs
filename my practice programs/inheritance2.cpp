#include <iostream>
using namespace std;

class A {
    public :
    void display (){
        cout<<"Base program";
    }
};
class B:public A{

};
class C : public B{

};

int main(int argc, char const *argv[])
{
    C obj;
    obj.display();
    return 0;
}
