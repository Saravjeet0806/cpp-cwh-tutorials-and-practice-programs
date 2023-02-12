#include <iostream>
#include <string>
using namespace std;
class CWH {
    protected: 
    string title;
    float rating;
    public: 
    CWH (string s, float r){
        title= s;
        rating = r;
    }
    virtual void display ()= 0;
};
class CwHVideo : public CWH{
    float videolength;
    public :
    CwHVideo(string s, float r, float v1): CWH(s,r){
        videolength=v1;
    }
    void display(){
        cout<<"This is an amazing video with title"<<title<<endl;
        cout<<"Rating: "<<rating <<" out of 5 stars"<<endl;
        cout<<"Length of this video is: "<<videolength<<" minutes"<<endl;
    }
};

class CWHText:public CWH
{
    int words;
    public:
    CWHText(string s, float r, int wc): CWH(s,r){
        words = wc;
    }
    void display(){
        cout<<"This is an amazing text tutorial with title"<<title<<endl;
        cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
        cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
    }
};
int main(){
string title;
float rating , vlen;
int words;

// for Code with Harry video
title ="Django tutorial";
vlen = 4.56;
rating = 5;
CwHVideo djVideo(title,rating,vlen);

//for code with harry text
title = "Django tutorial Text";
words = 433;
rating = 4.23;
CWHText djText(title, rating, words);

CWH* tuts[2];
tuts[0]=&djVideo;
tuts[1]=&djText;

tuts[0]->display();
tuts[1]->display();
return 0;
}