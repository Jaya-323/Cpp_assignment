#include<iostream>
#include<fstream>
using namespace std;
//Program to store student data using file handling
class student{
    public:
    int roll_no;
    string name;
    string course;
    int age;
    void input(){
        cout<<"Enter student id"<<" ";
        cin>>roll_no;
        cin.ignore();
        cout<<"Enter student name"<<" ";
        getline(cin,name);
        cin.ignore();
        cout<<"Enter the course student enrolled in:"<<endl;
        getline(cin,course);
        cout<<"Enter student age"<<" ";
        cin>>age;
        


    }
    void display(){
        cout<<"Student id:"<<" "<<roll_no<<endl;
        cout<<"Student  name:"<<" "<<name<<endl;
        cout<<"Student  course:"<<" "<<course<<endl;
        cout<<"Student  age:"<<" "<<age<<endl;
    }
    };
    int main(){
        student e;
        cout<<"Enter details:"<<endl;
        e.input();
        ofstream outfile("stud.txt",ios::app);
        if(!outfile){
            cout<<"Employee details saved to file"<<endl;
            return 1;

        }
        outfile<<e.roll_no<<endl;
        outfile<<e.name<<endl;
        outfile<<e.course<<endl;
        outfile<<e.age<<endl;
        outfile.close();
      cout<<"Data entered successfully"<<endl;
      e.display();

    }