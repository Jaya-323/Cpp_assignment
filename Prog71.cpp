#include<iostream>
using namespace std;
class student{
    private:
      static int studentcnt;//Static data member
      string name;
    public:
    student(string n){
        name=n;
        studentcnt++;
    }
    void stdname(){
        cout<<"Student name:"<<" "<<name<<endl;

    }
    static void stdcount(){
        cout<<"Total students:"<<" "<<studentcnt<<endl;
    }
};
int student::studentcnt=0;
int main(){
student s1("anc");
student s2("abc");
student s3("xyz");
s1.stdname();
s2.stdname();
s3.stdname();
student::stdcount();
}