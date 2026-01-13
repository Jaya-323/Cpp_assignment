#include<iostream>
using namespace std;
class loginexp
{

public:
    void show(){
        cout<<"Login failed !, incorrect username or password"<<endl;

    }
};

class bank{
    private:
    string acc_no;
    string passw;
    public:
    void setdetails(string acc,string pass){
        acc_no=acc;
        passw=pass;
    }
    void login(string acc,string pass){
        if(acc!=acc_no||pass!=passw){
            throw loginexp();
        }
        cout<<"Login successful"<<endl;
    }
};
int main(){
    bank b;
    b.setdetails("123456","npm20934");
    string acc ,pass;
    cout<<"Enter account number:";
    cin>>acc;
    cout<<"Enter password:";
    cin>>pass;
    try{
        b.login(acc,pass);
    }
    catch(loginexp l){
        l.show();
    }
}
