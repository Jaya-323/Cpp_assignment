#include<iostream>
using namespace std;
//multiple types of exception
int main(){
    int choice;
    cout<<"Enter choice(1 or 2):"<<" "<<endl;
    cin>>choice;
    try{
        if(choice==1)
        throw 10;
        else if(choice==2)
        throw string("string exception occurred");
        else
        cout<<"No exception thrown."<<endl;
    }
    catch(int x){
        cout<<"Integer exception caught."<<x<<endl;
    }
    catch(string msg){
        cout<<"String message caught."<<" "<<msg<<endl;
    }
}