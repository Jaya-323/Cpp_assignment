#include<iostream>
using namespace std;
//Program showing order of destructor
class base{
    public:
    ~base(){
        cout<<"This is base destructor"<<endl;

    }
};
class derived:public base{
    public:
    ~derived(){
        cout<<"This is derived class destructor"<<endl;
    }
};
int main(){
    derived d;
}