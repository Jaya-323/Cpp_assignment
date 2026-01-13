#include<iostream>
using namespace std;
class base{
    public:
    virtual ~base(){
        cout<<"This is base class destructor"<<endl;
    }
};
class derived:public base{
public:
~derived(){
    cout<<"This is derived class destructor"<<endl;

}
};
 int main(){
    base* b=new derived();
    delete b;
    
 }