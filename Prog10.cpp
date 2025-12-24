#include<iostream>
#include<cmath>
using namespace std;
// type casting demonstration.
int main(){
    float num;
    cout<<" Write any number and it will be divided into integer and fractional part :"<<endl;
    cin>>num;
    
    int int_part=(int)num;
   // int int_part=(floor)num;
    float float_part=num-int_part;

    cout<<"The  entered number integer part is: "<<" "<<int_part<<endl;
    cout<<"The entered number fractional part is: "<<" "<<float_part<<endl;

}