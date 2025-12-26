#include<iostream>

using namespace std;
// Demonstrating some of the relational operators
int main(){
    int a , b , c ;
    cout<<"Enter the numbers:"<<endl;
    cin>>a>>b>>c;
    if(a>b||a>c){
        cout<<"Greater is  "<<a<<endl;

    }
    else if(b>a || b>c){
        cout<<"Greater is "<<b<<endl;
    }
    else if(c>a  || c>b){
        cout<<"Greater is  "<<c<<endl;

    }
    else if(a==b && a==c && b==c){
        cout<<" All are equal"<<endl;
    }
    
}