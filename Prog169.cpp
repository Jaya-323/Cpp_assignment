#include<iostream>
using namespace std;
class bank{
    public:
    void show(){
        cout<<"Error : not enough balance"<<endl;

    }

};
int main(){
   double balance=6000,amt;
   cout<<"Enter amount to withdraw:"<<" ";
   cin>>amt;
   try{
    if(amt>balance){
        throw bank();
    }
    balance-=amt;
    cout<<"Withdrawl successful. amount left"<<" "<<balance<<endl;

   }
   catch(bank b){
    b.show();
   }

}