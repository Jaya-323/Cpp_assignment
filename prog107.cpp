#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;
//Program shoing polymorphic array
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
class circle:public shape{
    private:
    float r;
    public:
    circle(float radius){
        r=radius;

    }
    void area(){
        cout<<"Area of circle is:"<<" "<<PI*pow(r,2)<<"cm^2"<<endl;
    }
};
 int main(){
    shape* s[2];
    rec r(20,10);
    circle c(0.24);
    s[0]=&r;
    s[1]=&c;
    for(int i=0;i<2;i++){
        s[i]->area();
    }
   
    
 }