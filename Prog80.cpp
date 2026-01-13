#include<iostream>
using namespace std;
class student{
private:
float cgpa;
public:
void set(float mark){
cgpa=mark;
}
void display(){
    cout<<"Cgpa is:"<<" "<<cgpa<<endl;
}
};
int main(){
    student* s=new student;//dynamic object creation
    s->set(9.8);
    s->display();
    delete s;//dynamic object deletion
    s=nullptr;

}