#include<iostream>
using namespace std;
//student result processing system
class student{
    private:
    string name;
    int roll;
    int marks[3];
    float avg;
    char grade;
    public:
    void input(){
     cout<<"Enter name:"<<" ";
     getline(cin,name);
     cout<<"Enter roll number:"<<" ";
     cin>>roll;
     cout<<"Enter marks for 3 subjects:"<<" ";
     for(int i=0;i<3;i++){
        cin>>marks[i];
     }
    }
    void calcResult(){
        int total=0;
        for(int i=0;i<3;i++){
            total+=marks[i];
        }
        avg=total/3.0;
        if(avg>=75){
            grade='A';

        }
        else if(avg>=60){
            grade='B';
            
        }
        else if(avg>=50){
            grade='c';
            
        }
        else if(avg>=40){
            grade='D';
            
        }
        else{
            grade='E';
        }
    }
    void display(){
        cout<<"Student details:"<<endl;
        cout<<"Name:"<<" "<<name<<endl;
        cout<<"Roll number:"<<" "<<roll<<endl;
        cout<<"Marks:";
        for(int i=0;i<3;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
        cout<<"percentage:"<<" "<<avg<<"%"<<endl;
        cout<<"grade:"<<grade<<endl;
    }
};
int main(){
  student s;
  s.input();
  s.calcResult();
  s.display();  
}