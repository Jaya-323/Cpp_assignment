#include<iostream>
using namespace std;
class bank{
private:
long int account_num=59561102;
int passw=2009875;
public:
void get(){
    cout<<"Account number is:"<<" "<<account_num<<endl;
}

void changepass(){
 cout<<"Enter your new password:"<<" "<<endl;
 cin>>passw;
}
void display(){
    cout<<"Account number is:"<<" "<<account_num<<endl;
    cout<<"Changed password is:"<<" "<<passw;
}    
};
int main(){
bank b;
b.get();
b.changepass();
b.display();

}