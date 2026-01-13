#include<iostream>
using namespace std;
//Showing order of constructor through inheritance
class A{
    public:
    A(){
        cout<<"This is 1st constructor"<<endl;

    }
};
class B:public A{
    public:
    B(){
        cout<<"This is 2nd constructor"<<endl;
    }
};
int main(){
B b;

}