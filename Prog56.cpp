#include<iostream>
using namespace std;
class des{
    public:
    des(){
        cout<<"Object created by the constructor."<<endl;
    }
    ~des(){
        cout<<"Object destroyed by the destructor."<<endl;
    }
};
int main(){
des d1;

cout<<"End"<<endl;
}