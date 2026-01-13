#include<iostream>
using namespace std;
//program throwing an integer exception
int main(){
    int age;
    cout<<"Enter your age:"<<" ";
    cin>>age;
    try{
        if(age<18){
            throw age;
        }
        cout<<"Access granted"<<endl;
    }
    catch(int x){
        cout<<"Exception! , age below 18: "<<" "<<age<<endl;
    }
}