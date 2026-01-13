#include<iostream>
using namespace std;
//multiple catch blocks for one try block
int main(){
     int choice;
    cout<<"Enter choice(1,2 or 3):"<<" "<<endl;
    cin>>choice;
    try{
        if(choice==1)
        throw 10;
        else if(choice==2)
        throw string("string exception occurred");
        else if(choice==3)
        throw 3.14;
        else
        cout<<"No exception thrown."<<endl;
    }
    catch(int x){
        cout<<"Integer exception caught."<<x<<endl;
    }
    catch(string msg){
        cout<<"String message caught."<<" "<<msg<<endl;
    }
    catch(double f){
        cout<<"double exception caught"<<" "<<f<<endl;
    }
}