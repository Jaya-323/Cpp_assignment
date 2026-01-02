#include<iostream>

using namespace std;
//program using nested if
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;
    if(n>0){
        if(n%2==0){
            cout<<"Positive Even number"<<endl;
        }
        else{
            cout<<"Positive Odd number"<<endl;
        }
    }
    else{
        cout<<"Negative number"<<endl;
    }
}