#include<iostream>
using namespace std;
//Program with multiple constructors.
class demo{
 private:
 int a,b;
 public:
 demo(){
    cout<<"Practice for constructor ."<<endl;
 }
 demo(int x, int y){
    a=x;
    b=y;
    cout<<" This is a paramaterized constructor ."<<endl;
    cout<<"The values that are inserted into the private member are:"<<" "<<x<<" "<<y;
 }
 
};
int main(){
demo d1;
demo d2(4,5);
}