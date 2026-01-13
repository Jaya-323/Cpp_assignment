#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
      cout<<"Function of base class"<<endl;
    }
};
class derived:public base{
public:
void display(){
    cout<<" Function of derived class"<<endl;
}
};
 int main(){
    base* b;//pointer of base class
    derived d;
    b=&d;//Base class pointer pointing base class
    b->display();//Calls derived class function
 }