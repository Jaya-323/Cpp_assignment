#include<iostream>
using namespace std;
int main(){
    try{
        cout<<"Outer try bolck"<<endl;
        try{
            cout<<"Inner try bolck"<<endl;
            throw 20;
        }
        catch(int x){
            cout<<"Exception caught in inner try bolck"<<" "<<x<<endl;
            throw;
        }
    }
    catch(int x){
        cout<<"Exception caught in outer try block"<<" "<<x<<endl;
    }
}