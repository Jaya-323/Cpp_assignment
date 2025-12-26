#include<iostream>
using namespace std;

int main(){
    // DEMONSTRATING ASSIGNMENT OPERATOR
    int a , b;
    cout<<" Enter a and b value:"<<endl;
    cin>>a>>b;
    char ch ;
    cout<<"Enter the symbol of operation you want to perform on the two numbers(+ , - , * , / , %):"<<endl;
    cin>>ch;
    if(ch=='+'){
      a+=b;
     cout<<" value after evaluating a and b is:"<<a<<endl;


    }
    else  if(ch=='-'){
      a-=b;
      cout<<" value after evaluating a and b is:"<<a<<endl;


    }
    else  if(ch=='*'){
      a*=b;
       cout<<" value after evaluating a and b is:"<<a<<endl;


    }
    else  if(ch=='/'){
      a/=b;
      cout<<" value after evaluating a and b is:"<<a<<endl;


    }
    else  if(ch=='%'){
      a%=b;
      cout<<" value after evaluating a and b is:"<<a<<endl;

    }
    else  {
       cout<<"Invalid character"<<endl;
    }

    }

