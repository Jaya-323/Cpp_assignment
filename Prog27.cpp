#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number whose table needs to be find:"<<endl;
    cin>>n;
    int c=1;
    int digit;
    while(c<=10){//Table printing using while loop
         digit=n*c;
        
         cout<<n<<"x"<<c<<"="<<digit<<endl;
         c++;
    }

}