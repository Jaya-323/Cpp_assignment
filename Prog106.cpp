#include<iostream>
using namespace std;
//Program demonstrating abstract shape class
class shape{
    public:
    virtual void area()=0;
};
class rec:public shape{
private:
int l,b;
public:
rec(int len , int breadth){
    l=len;
    b=breadth;
}
void area(){
    cout<<"area of ractangle is :"<<" "<<l*b<<"cm^2"<<endl;
}
};
 int main(){
    shape* s;
    rec r(20,10);
    s=&r;
    s->area();
    
 }