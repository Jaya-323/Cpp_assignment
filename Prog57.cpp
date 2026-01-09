#include<iostream>
using namespace std;
class base{
    public:
    base(){
        cout<<"Base constructor called first."<<endl;
    }
};
class derived:public base{
    public:
    derived(){
        cout<<"Secondly derived constructor will be called."<<endl;
    }
};

int main(){
derived d;
}