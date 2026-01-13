#include<iostream>
using namespace std;
class base{
    public:
    virtual void display(){
        cout<<"Base class"<<endl;

    }
    virtual ~base(){};

};
class derived:public base{
    public:
    void display() override{
        cout<<"Derived class"<<endl;
        throw 1;
    }
};
int main(){
    base* b=new derived();
    try{
        b->display();
    }
    catch(int e){
        cout<<"Exception caught:"<<" "<<e<<endl;

    }
    delete b;
}
