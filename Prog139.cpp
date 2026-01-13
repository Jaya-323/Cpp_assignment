#include<iostream>
#include<fstream>
using namespace std;
//search for a record 
int main(){
     ifstream search("emp.txt");
    if(!search){
        cout<<"file not found"<<endl;

    }
    int search_id;
    cout<<"Enter employee id:";
    cin>>search_id;
    int emp_id;
    string name;
    bool found=false;

    while(search>>emp_id>>name){
    if(emp_id==search_id){
        cout<<"Employee id:"<<emp_id<<endl;
        found=true;
        break;
    }
    }
    if(!found){
        cout<<"RECORD NOT FOUND"<<endl;
    }
}