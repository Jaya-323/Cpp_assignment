#include<iostream>
using namespace std;
class student{
public:
virtual void details(){
    cout<<"I am a university student"<<endl;
}

};
class course:public student{
    public:
    void details(){
        cout<<"I am a second year student pursuing B.Tech"<<endl;
    }

};
int main(){
student* s;
course c;
s=&c;
s->details();//Late binding occurs here
//Late binding is the process which decide which function with which output will be called during runtime
 }