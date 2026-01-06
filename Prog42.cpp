#include<iostream>
using namespace std;
class password{
private:
int pass=1234;//Private member
public:
void setPassword(int p){//Public members
    pass=p;
}
void getpassword(){
    cout<<"password is:"<<" "<<pass;
}
};
int main(){
    password p;
    p.setPassword(4657);
    p.getpassword();
}