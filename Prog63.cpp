#include<iostream>

using namespace std;
class number{
private:
int num;
public:
number(int n){
    num=n;
}
friend void printnum(number n2);//friend function
};
void printnum(number n2){
    cout<<"Number is:"<<" "<<n2.num<<endl;
}
int main(){
    number n1(16);
    printnum(n1);
}