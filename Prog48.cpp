#include<iostream>
#include<math.h>
#define PI 3.14
using namespace std;//Calculate area using class object
class area{
  private:
  float r;
  public:
  void radius(){
    cout<<"Enter the radius of circle whose area to be found:"<<" ";
    cin>>r;
  }
  void ar(){
    cout<<"Area is :"<<" "<<PI*pow(r,2)<<" "<<"m^2"<<endl;
  }
};
int main(){
    area a;
    a.radius();
    a.ar();
}