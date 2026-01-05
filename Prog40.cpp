#include<iostream>
#include<string>
using namespace std;
struct Student
{
    string name;
    int roll_no;
    string course;
    int sem;
    int age;
    string subjects[6];
    void display(){
        cout<<"Student name:"<<" "<<name<<endl;
        cout<<"Student roll_no is :"<<" "<<roll_no<<endl;
        cout<<"Course enrolled is :"<<" "<<course<<endl;
        cout<<"Currently in semester:"<<" "<<sem<<endl;
        cout<<"Age is:"<<" "<<age<<" "<<endl;
        cout<<"Subjects sdudying are"<<endl;
        for(int i=0;i<6;i++){
            cout<<subjects[i]<<endl;
        }

    }

};

int main(){
Student s;
cout<<"Enter the student name:"<<" ";
getline(cin,s.name);
cout<<"Enter the roll_no:"<<" ";
cin>>s.roll_no;
cout<<"Enter your course:"<<" ";
cin.ignore();
getline(cin,s.course);
cout<<"Enter the sem :"<<" ";
cin>>s.sem;
cout<<"Enter student's age:"<<" ";
cin>>s.age;
cout<<"Enter the subjects "<<endl;

for(int i=0;i<6;i++){
  cin>>s.subjects[i];
}
s.display();

}