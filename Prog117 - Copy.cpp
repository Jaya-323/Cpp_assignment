#include<iostream>
#include<string>
//program using multiple classes composition
using namespace std;
class address{
    public:
    string city;
    string state;
    void input(){
        cout<<"Enter city:";
        cin>>city;
       // getline(cin,city);
      
        cout<<"Enter state:";
        cin>>state;
       // getline(cin,state);
    }
    void display(){
        cout<<"City:"<<city<<",state:"<<state<<endl;

    }

};
class student{
    private:
    string name;
    int roll;
    address addr;
    public:
    void input(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter roll number:";
        cin>>roll;
        cout<<"Input address:\n";
        addr.input();
    }
    void display(){
        cout<<"Student details:"<<endl;
        cout<<"name:"<<" "<<name<<"roll number:"<<" "<<roll<<endl;
        addr.display();

    }
};
int main(){
    student s;
    s.input();
    s.display();
}
