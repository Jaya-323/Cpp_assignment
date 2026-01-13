#include<iostream>
using namespace std;
//division by zero exception handling
int main(){
    int x , y;
    cout<<"Enter the numbers:"<<" ";
    cin>>x>>y;
    try{
        if(y==0){
            throw y;
        }
        cout<<"Divison:"<<" "<<x/y<<endl;
    }
    catch(int a){
        cout<<"An exception!, division by zero is not allowed"<<" "<<a<<endl;

    }

}