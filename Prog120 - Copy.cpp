#include<iostream>
using namespace std;
//object life cycle
class student{
    private:
    string name;
    int roll;
    public:
    student(string n , int r){
       name=n;
       roll=r;
       cout<<"Constructor called:object created for"<<name<<endl;


    }
    void display(){
        cout<<"Name:"<<name<<",Roll:"<<roll<<endl;
    }
    ~student(){
        cout<<"Destructor called: object destructed for"<<name<<endl;

    }
};
int main(){
    cout<<"Main function started"<<endl;

    //object creation
    student s1("abc",1);
    s1.display();
    {
        //object inside block
        student s2("xyz",2);
        s2.display();
        cout<<"Block ends"<<endl;

    }//s2 destroyed here
    cout<<"Main function ends"<<endl;
}//s1 destroyed here