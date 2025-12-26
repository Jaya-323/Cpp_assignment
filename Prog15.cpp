#include<iostream>
using namespace std;

int main(){
    int a , b;

    cout<<" Enter the numbers:"<<endl;
    cin>>a>>b;
    cout<<"bitwise operator or (|):-"<<(a|b)<<endl;//bitwise operator or ("|") does the binary addition
    cout<<"bitwise operator and(&):-"<<(a&b)<<endl;//bitwise operator and("&")
    cout<<"bitwise operator and(^):-"<<(a^b)<<endl;//bitwise operator xor("^")
    cout<<"bitwise operator not(~):-"<<(~a)<<endl;//bitwise operator not("~")
    cout<<"bitwise operator left shift(<<):-"<<(a<<1)<<endl;//bitwise operator left shift("<<")
    cout<<"Bitwise operator right shift(>>):-"<<(b>>2)<<endl;//Bitwise operator right shift(">>")

}