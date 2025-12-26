#include<iostream>
using namespace std;

int main(){
    int a , b, c;
    cout<<"Enter the sides for the triangle:"<<endl;
    cin>>a>>b>>c;
    if(a==b && b==c && c==a)//Demonstration of relational operator "=="
    {
        cout<<"Equilateral triangle"<<endl;
    }
    else if (a==b && a!=c ||b==c && b!=a || a==c && a!=b)//Demonstration of relational operator ">"
    {
      cout<<"Isosceles triangle"<<endl;
    }
    else if(a!=b && b!=a && c!=a){
        cout<<"Scalene triangle"<<endl;
    }
    else{
        cout<<"Invalid input"<<endl;
    }
}