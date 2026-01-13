#include<iostream>
using namespace std;
//program using try-catch block
int main(){
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    try{
        if(b==0){
            throw b;
        }
        cout<<"Result="<<" "<<a/b<<endl;
    }
    catch(int x){
        cout<<"Error! , division by zero is not allowed"<<endl;
    }
}