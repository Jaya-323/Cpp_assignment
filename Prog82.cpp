#include<iostream>
using namespace std;
//Program for multilevel inheritance
class person{
    public:
    void displayperson(){
        cout<<"I am a person"<<endl;
    }
};
class student:public person{
    public :
    void displaystd(){
        cout<<"I am a student"<<endl;
    }
};
class uni:public student{
public:
void unistd(){
cout<<"I am a university student"<<endl;
}
};
int main(){
    uni u;
    u.displayperson();
    u.displaystd();
    u.unistd();

}