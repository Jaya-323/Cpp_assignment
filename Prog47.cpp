#include<iostream>
using namespace std;
//Find largest of two  numbers using class
class largest{
private:
int a,b;
public:
void read(){
    cout<<"Enter the numbers:"<<endl;
    cin>>a>>b;
}
void findlargest(){
    if(a>b){
        cout<<"a is largest"<<" "<<"and value of a is:"<<" "<<a<<endl;

    }
    else{
         cout<<"b is largest"<<" "<<"and value of b is:"<<" "<<b<<endl;
    }
}
};
int main(){
    largest l;
    l.read();
    l.findlargest();
}