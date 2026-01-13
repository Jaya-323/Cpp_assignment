#include<iostream>
using namespace std;
//bank account system using oop
class acc{
private:
string acc_num;
string passw;
string branch;
double balance;
public:
void details(){
    cout<<"Enter account number:"<<" ";
    cin>>acc_num;
     cout<<"Enter account password:"<<" ";
    cin>>passw;
     cout<<"Enter account branch:"<<" ";
    cin>>branch;
     cout<<"Enter amount :"<<" ";
    cin>>balance;
}
void check(double amt){
    if(amt>balance){
        cout<<"Not enough money in the account"<<endl;

    }
    else{
        balance-=amt;
        cout<<"Money deducted! Your current account balance is:"<<" "<<balance<<endl;

    }
}
void display(){
    cout<<" account number:"<<" "<<acc_num<<endl;
     cout<<" account password:"<<" "<<passw<<endl;
     cout<<"Enter account branch:"<<" "<<branch<<endl;
     cout<<"Enter amount :"<<" "<<balance<<endl;
  
}
};
int main(){
    acc a;
    a.details();
    a.check(5000);
    cout<<"Details:"<<endl;
    a.display();


}