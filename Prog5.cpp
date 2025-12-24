#include<iostream>
#include<math.h>
using namespace std;
//Volume of a cylinder
int main(){
    const float pi=3.14;
    int r, h;
    cout<<"enter the radius:"<<endl;
    cin>>r;
    cout<<"Enter the height:"<<endl;
    cin>>h;
    float vol;
    vol=pi*pow(r,2)*h;
    cout<<"Volume is:"<<vol<<endl;
}