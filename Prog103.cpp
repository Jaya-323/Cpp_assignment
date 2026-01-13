#include<iostream>
using namespace std;
//Program showing overriding of base function
class base{
    public:
    void display(){
        cout<<"this is base class function"<<endl;
    }
};
class derived:public base{
    public:
    void display(){
        cout<<"This is overriding of base function"<<endl;
    }
};

 int main(){
    derived d;
    d.display();
 }