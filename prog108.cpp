#include<iostream>
using namespace std;
class base{
    public:
    //Static binding
    void show(){
        cout<<"This is a static binding function for base class"<<endl;

    }
    virtual void display(){
        cout<<"This is base class dynamic binding function"<<endl;
    }
};
class derived:public base{
    public:
    //Static binding
    void show(){
        cout<<"This is a static binding function for derived class"<<endl;

    }
    //virtual binding
    void display(){
        cout<<"This is derived class dynamic binding function"<<endl;
    }
};


 int main(){
    base* b;
    derived d;
    b=&d;
    b->show();//static binding
    b->display();//dynamic binding

 }