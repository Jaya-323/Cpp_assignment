#include<iostream>
//Program for a simple class and object.
using namespace std;
class Student
{
    public://publicis used as without public name is not acessible inside main function , it will act as private data.
string name;
int roll_no;
string course;

};
int main(){
Student s;
s.name="Abc";
s.roll_no=1;
s.course="Btech";
cout<<"Name is :"<<" "<<s.name<<endl;
cout<<"Roll number is:"<<" "<<s.roll_no<<endl;
cout<<"Course is:"<<" "<<s.course<<endl;


}