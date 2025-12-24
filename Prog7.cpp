#include<iostream>
//Temperature conversion from celsius to fahrenheit.
using namespace std;
int CelsiusToFahrenheit(float c){
    float f=(9.0/5)*c+32;
    return f;
}
int main(){
    float temp;
    cout<<"Enter your temperature in celsius:"<<endl;
    cin>>temp;
    float convert=CelsiusToFahrenheit(temp);
    cout<<"Temperatue in fahrenheit will be :"<<" "<<convert<<char(248)<<"F"<<endl;

}