#include<iostream>
#include<sstream>
using namespace std;
//program for string stream
int main(){
    string data;
    cout<<"Enter roll number , name and marks:"<<endl;
    getline(cin,data);
    stringstream ss(data);
    int roll; 
    string name;
    float marks;
    ss>>roll>>name>>marks;
    cout<<"Entered details:"<<endl;
    cout<<"Roll no."<<" "<<roll<<endl;
    cout<<"Name:"<<" "<<name<<endl;
    cout<<"Marks:"<<" "<<marks<<endl;
}