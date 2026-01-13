#include<iostream>
using namespace std;
//string exception
int main(){
    int marks;
    cout<<"Enter marks:"<<" ";
    cin>>marks;
    try{
        if(marks<40){
            throw string("Fail:marks are below passing criteria");


        }
    }
     catch(string msg){
            cout<<"Exception caught"<<" "<<msg<<endl;
        }
}