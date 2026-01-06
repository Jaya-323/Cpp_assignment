#include<iostream>
using namespace std;

//Airthmetic calculation using class
class airthmetic{
private:
int a=9;
int b=18;
public:
void get(){
    cout<<"Operands are:"<<" "<<a<<" "<<b<<endl;

}
int sum(){
    return a+b;
}
int diff(){
    return b-a;
}
int prod(){
    return a*b;
}
int quo(){
    return b/a;
}
int rem(){
    return b%a;
}
void display(){
    cout<<"Some example result of airthmetic calculation!!"<<endl;
    cout<<"Addition:"<<" "<<sum()<<endl;
    cout<<"Subtraction:"<<" "<<diff()<<endl;
    cout<<"Multiplication:"<<" "<<prod()<<endl;
    cout<<"Division: "<<" "<<quo()<<endl;
    cout<<"Modulo:"<<" "<<rem()<<endl;
}

};
 int main(){
    airthmetic a;
    a.get();
    a.display();
 }