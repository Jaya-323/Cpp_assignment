#include<iostream>
#include<string>
using namespace std;
// if- else program 
int main(){
   int num;
   cout<<"Enter your percentage:"<<" "<<"%";
   cin>>num;
   if(num>90){
    cout<<"Grade A+"<<endl;
   }
   else if(num>80){
    cout<<"Grade A"<<endl;
   }
   else if(num>70){
    cout<<"Grade B"<<endl;
   }
   else if(num>60){
    cout<<"Grade c"<<endl;

   }
   else if(num>50){
    cout<<"Grade D"<<endl;


   }
   else if(num>40){
    cout<<"Grade E"<<endl;


   }
   else if(num>30){
    cout<<"Grade F"<<endl;
   }
   else{
    cout<<"Fail"<<endl;
   }

}