#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter your number:"<<endl;
    cin>>a>>b;
    cout<<"Values before swapping:"<<a<<" "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"Values after swapping:"<<a<<" "<<b<<endl;

}