#include<iostream>
using namespace std;
class A{
    public:
    void show(){
        cout<<"This is class A"<<endl;

    }
};
class B{
    public:
    void show(){
        cout<<"This is class B"<<endl;

    }
};
class C:public A , public B{
};
int main(){
    C obj;
   // obj.show() THIS IS AN AMBUIGUITY PROBLEM THAT WILL CONFUSE THE COMPILER  WHICH FUNCTION TO CALL AS BOTH OF THEM HAVE SAME NAMED FUNCTION
   //This is resolved through using scope resolution operator
   obj.A::show();
   obj.B::show();
}