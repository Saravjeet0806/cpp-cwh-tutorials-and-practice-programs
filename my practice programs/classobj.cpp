#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

class Student {
    private : 
    int rollno;
    char name[25];
    float marks;
    
    public : 
    void readStudent();
    void dispStudent();
    int getRollno(){
        return rollno;
    }
    float getMarks(){
        return marks;
    }
};
void Student :: readStudent(){
    cout<<"\nEnter rollno\n";   cin>>rollno;
    cout<<"Enter name\n";   cin>>name;
    cout<<"Enter marks\n";   cin >> marks;
}
void Student ::dispStudent(){
    cout<<"\n Roll no of student is "<<rollno<<endl<<"Name of student is "<<name<<endl<<"Marks are "<<marks<<endl;
}

Student si;
int main(){
    for (int i = 0; i < 10; i++)
    {
       si.readStudent();
       si.dispStudent();
    }
    
//s1.readStudent();
//s1.dispStudent();
//s2.readStudent();
//s2.dispStudent();
return 0;
}