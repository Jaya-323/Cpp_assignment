#include<iostream>
#include<fstream>
using namespace std;
//program for reading and writing an object in a file
class employee{
    public:
    int emp_id;
    string name;
    void input(){
        cout<<"Enter employee id"<<" ";
        cin>>emp_id;
        cin.ignore();
        cout<<"Enter employee name"<<" ";
        getline(cin,name);

    }
    void display(){
        cout<<"Employee id:"<<" "<<emp_id<<endl;
        cout<<"Employee name:"<<" "<<name<<endl;
    }
    };
    int main(){
        employee e;
        cout<<"Enter details:"<<endl;
        e.input();
        ofstream outfile("emp.txt",ios::app);
        if(!outfile){
            cout<<"Employee details saved to file"<<endl;
            return 1;

        }
        outfile<<e.emp_id<<" "<<e.name<<endl;
        outfile.close();
      cout<<"Data entered successfully";

    }