#include<iostream>
using namespace std;
class dynamic{
 private:
 int *ptr;
 public:
 dynamic(){
   ptr=new int;
   *ptr=20;
   cout<<"Memory allocated to the object"<<endl;
 }
void display(){
    cout<<"The value assigned to the dynamically allocated pointer is:"<<" "<<*ptr<<endl;
}
~dynamic(){
    delete ptr;
    cout<<"Memory deallocated in destructor"<<endl;
}
 
};
int main(){
dynamic d;
d.display();
}