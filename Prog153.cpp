#include<iostream>
using namespace std;
//program for user-defined exception class
class myexception{
    public:
    void show(){
        cout<<"User-defined exception."<<endl;

    }
};
int main(){
    try{
        int x;
        cout<<"Enter a number:"<<" ";
        cin>>x;
        if(x<0){
            throw myexception();
        }
        cout<<"Valid number entered"<<endl;
    }
    catch(myexception e){
        e.show();
    }
}