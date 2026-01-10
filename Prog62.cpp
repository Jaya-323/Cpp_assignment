#include<iostream>
using namespace std;
class val{
private:
float a;//member varaiable
public:
void setvalue(float a)
{
    //local variable = a(parameter)
    //member variable= this->a
    this->a=a;
}
void display(){
    cout<<"Value of a is:"<<" "<<a<<endl;
}
};
int main(){
val v;
v.setvalue(4.5);
v.display();
}