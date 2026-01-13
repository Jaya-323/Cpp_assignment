#include<iostream>
using namespace std;
//program for multiple inheritance
class animal{
    public:
    void display(){
        cout<<"This is an animal"<<endl;
    }
};
class type{
    private:
    string kind;
    public:
   
    void setvar(string ki){
        kind=ki;
    }
    void typereveal(){
        cout<<"This is a "<<" "<<kind<<" "<<"animal"<<endl;
    }
};
class sound:public animal,public type{
    public:
    void s(){
cout<<"Yes this animal can make sound"<<endl;
    }
};
int main(){
    sound sn;
    sn.display();
    sn.setvar("land");
    sn.typereveal();
    sn.s();
}