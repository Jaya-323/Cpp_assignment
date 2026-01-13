#include<iostream>
using namespace std;
//single inheritance
class vehicle{
    public:
    void haveEngine(){
        cout<<"All vehicles have engine"<<endl;
    }
};
class car:public vehicle{
public:
void tyres(){
    cout<<"A car have 4 tyres"<<endl;
}
};
;
int main(){
car c;
c.haveEngine();
c.tyres();
}