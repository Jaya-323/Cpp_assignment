#include<iostream>
using namespace std;
//program for implication of polymorphism
class payment{//base class
    public:
    //virtual function
    virtual void pay(double amt){
        cout<<"Paying"<<" "<<amt<<" "<<"using cash"<<endl;

    }
};
//derived class
class creditCard:public payment{
    public:
    void pay(double amt){
         cout<<"Paying"<<" "<<amt<<" "<<"using credit card"<<endl;
    }
};
//derived class
class Paytm:public payment{
    public:
    void pay(double amt){
         cout<<"Paying"<<" "<<amt<<" "<<"using paytm"<<endl;
    }
};
class GPay:public payment{
    public:
    void pay(double amt){
         cout<<"Paying"<<" "<<amt<<" "<<"using GPay"<<endl;
    }
};
 int main(){
    payment* p[3];//pointer for base class
    creditCard c;
    Paytm pa;
    GPay g;
    p[0]=&c;
    p[1]=&pa;
    p[2]=&g;
    double amt=2000.0;
    for(int i=0;i<3;i++){
        p[i]->pay(amt);
    }


    
 }