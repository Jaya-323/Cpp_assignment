#include<iostream>
using namespace std;

int main(){
    //increment and decrement operator
    int a;
    cout<<"Enter value:"<<endl;
    cin>>a;
    int b;
    b=a++;
    cout<<"Vlaue after post increment :"<<b<<endl;
    b=++a;
    cout<<"Vlaue after pre increment :"<<b<<endl;
    b=--a;
    cout<<"Vlaue after pre decrement :"<<b<<endl;
    b=a--;
    cout<<"Vlaue after post decrement:"<<b<<endl;

}