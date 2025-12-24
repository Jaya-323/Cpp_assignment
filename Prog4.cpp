#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter your number:"<<endl;
    cin>>a>>b;
    cout<<"Number before swapping is:"<<a<<" "<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    
    cout<<"Numbers after swapping are:"<<a<<" "<<b<<endl;
    

}