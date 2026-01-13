#include<iostream>
using namespace std;
//Program dshowing virtual function
class base{
public:
virtual void show(){
    cout<<"This is base class function"<<endl;
}
};
class derived :public base{
    public:
    void show(){
        cout<<"this is derived class function"<<endl;
    }
};
int main(){
    base *b;
    derived d;
    b=&d;
    b->show();
}