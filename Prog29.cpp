#include<iostream>
using namespace std;

int main(){
    int n=10;
   
   
    for(int i=1;i<=n;i++){//Program using break statement
        if(i%2==0){
            cout<<i<<endl;
          if(i==10){
            break;
          }
        }

    }
     int n1;
    cout<<"Enter the number upto which even number needs to be found:"<<endl;
    cin>>n1;

   for(int i=1;i<=n1;i++){//Program using continue statement
    if(i==7){
            continue;
        }
    if(i%2!=0){
        cout<<i<<endl;
        
    }
   }
}