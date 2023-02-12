#include <iostream> 
using namespace std;

class student {
    int rollno;
    char name [20];
    double fee;
    public:
    student (){
        cout<<"Enter the roll no"<<endl;
        cin>> rollno;
        cout<<"Enter the name"<<endl;
        cin >> name;
        cout<<"Enter the fee"<<endl;
        cin>>fee; 
    }
    void display();
};
void student :: display(){
    cout<<endl<<rollno<<"\t"<<name<<"\t"<<fee;
}
int main(int argc, char const *argv[])
{
    student s;
    s.display();
    return 0;
}
