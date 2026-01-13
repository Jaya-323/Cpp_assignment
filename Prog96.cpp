#include<iostream>
using namespace std;
//Program for function overloading
class calculate{
    public:
    int add(int a , int b){
        return a+b;
    }
    int add(int a, int b, int c){
        return a+b+c;
    }
   
};
int main(){
    calculate c;
    cout<<"Addition of two numbers"<<" "<<c.add(2,5)<<endl;
    cout<<"Addition of three numbers:"<<" "<<c.add(9,8,9)<<endl;
    
}