#include<iostream>
using namespace std;
class vehicle
{

public:
 virtual void start(){
    cout<<"vehicle is starting"<<endl;
 }
};
class car:public vehicle{
    public:
     void start(){
    cout<<"Car is starting with key"<<endl;
 }
};
class bike:public vehicle{
    public:
     void start(){
    cout<<"Bike is starting with kicking kick start lever "<<endl;
 }
};


 int main(){
    vehicle* v;
    car c;
    bike b;
    v=&c;
    v->start();
    v=&b;
    v->start();
 }