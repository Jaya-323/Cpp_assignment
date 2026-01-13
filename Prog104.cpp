#include<iostream>
using namespace std;
class base{
    public:
    virtual void show(){
      cout<<"Display function of base class"<<endl;
    }
};
class derived:public base{
public:
void show(){
    cout<<"Display function of derived class"<<endl;
}
};
 int main(){
    base* b;
    derived d;
    b=&d;
    b->show();//Dynamic method dispatch
    //Same as late binding
 }