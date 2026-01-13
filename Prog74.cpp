#include<iostream>
using namespace std;
class student{
    private:
    int roll;
    public:
    void setroll(int r){
        roll=r;
    }
  
    void display(){
    cout<<"Roll no :"<<" "<<roll<<endl;
    }

};
int main(){
student s;
s.setroll(24);
s.display();
}