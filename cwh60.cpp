#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    string st = "hello world";
    // opening files using constructor and writing it
    ofstream out("abc.txt");
    out << st;
    return 0;
}