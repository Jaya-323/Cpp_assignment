#include<iostream>
using namespace std;
int main(){
    int n;
    try{
        cout<<"Enter a positive number:"<<" ";
        cin>>n;
        if(n<0){
            throw n;
        }
        cout<<"Valid number entered"<<" "<<n<<endl;

    }
    catch(int x){
        cout<<"Invalid input , creating exception"<<" "<<x<<endl;
    }
}