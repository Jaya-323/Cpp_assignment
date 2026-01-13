#include<iostream>
using namespace std;
//Program for hierarchial inheritance
class shape{
    public:
    void showshape(){
        cout<<"This is a shape:"<<endl;

    }
};
class triangle:public shape{
 public:
 void showTriangle(){
    int n;
    cout<<"enter size:"<<" ";
    cin>>n;
   for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
        cout<<" ";
    }
    for(int k=0;k<2*i-1;k++){
        cout<<"*";
    }
    cout<<endl;
   }
   cout<<"This is a triangle"<<endl;
 }
};
class rectangle:public shape{
    public:
    void showrectangle(){
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout<<"*";
            }
            cout<<endl;
        }
        cout<<"This is a rectangle"<<endl;
    }
};
int main(){
    triangle t;
    rectangle r;
    t.showshape();
    t.showTriangle();
    r.showshape();
    r.showrectangle();
}