#include<iostream>
using namespace std;
class first{
    public:
    void display(){
        cout<<"This is first class"<<endl;

    }
};
class second:private first{
public:
void dis(){
    cout<<"This is second class"<<endl;
}
};
int main(){
    second s;
    s.dis();
  //  s.display(); shows error as first class is private for second class
}