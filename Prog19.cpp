#include<iostream>
using namespace std;

int main(){
    // Program to determine leap year
  int year;
  cout<<"Enter the year to be checked:"<<endl;
  cin>>year;
  if(year%4==0 && year%100!=0|| year %400 ==0){
    cout<<"Leap year"<<endl;
  }
  else{
    cout<<"Not a leap year"<<endl;
  }

}