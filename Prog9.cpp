#include<iostream>
#include<math.h>
#include<string>
#define PI 3.14
using namespace std;
//Area of circle

float  Circle_area(float r){
    
float area=PI*pow(r,2);
return area;

}
//Area of triangle
float Triangle_area(float h , float b){
float area=(0.5)*h*b;
return area;

}
//Area of Rectangle
float  Rectangle_area(float l , float b){
float area=l*b;
return area;

}
int main(){
    string shape;
    cout<<"Enter the shape whose area you want to find(Circle , Triangle , Rectangle):"<<endl;
    getline(cin,shape);
    
    if(shape=="Circle" || shape=="circle"|| shape=="CIRCLE"){
        float r;
        cout<<"enter your radius";
        cin>>r;
         float ar=Circle_area(r);
        cout<<"Area of the shape is :"<<" "<<ar<<"cm^2";
    }

     if(shape=="Triangle" || shape=="triangle"|| shape=="TRIANGLE"){
        float h , b;
        cout<<"enter your shape's height";
        cin>>h;
        cout<<"enter your shape's base length";
        cin>>b;
        float ar=Triangle_area(h,b);
         cout<<"Area of the shape is :"<<" "<<ar<<"cm^2";

    }
    if(shape=="Rectangle" || shape=="rectangle"|| shape=="RECTANGLE"){
        float l, b;
        cout<<"enter your shape's length";
        cin>>l;
        cout<<"enter your shape's breadth";
        cin>>b;
        float ar=Rectangle_area(l,b);
         cout<<"Area of the shape is :"<<" "<<ar<<"cm^2";
         
    }
    }



