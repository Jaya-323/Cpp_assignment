#include<iostream>
using namespace std;
//Program for hybrid inheritance
class person{
public:
void showperson(){
    cout<<"I am a person"<<endl;
}
};
// multilevel inheritance
class student :public person{
public:
void showstd(){
    cout<<"I am a student"<<endl;
}
};
class sports{
    public:
    void sportchoice(){
        cout<<"I like to play basketball"<<endl;

    }
};
//Multiple inheritance
class summary:public student,public sports{
    public:
    void showabout(){
        cout<<"This all about my personality"<<endl;
    }
};
int main(){
    summary s;
    s.showperson();
    s.showstd();
    s.sportchoice();
    s.showabout();
}