#include <iostream>
using namespace std;

class Mammal{
    public:
    Mammal(){
        cout<<"Mammals can give birth."<<endl;
    }
};
class WingedAnimal{
    public :
    WingedAnimal(){
     cout<<"Winged animal can fly."<<endl;
    }
};
class Bat : public Mammal, public WingedAnimal{
    public:
    Bat(){
        cout<<"Bats are blind."<<endl;
    }
};
int main(int argc, char const *argv[])
{
    Bat obj;
    
    return 0;
}
