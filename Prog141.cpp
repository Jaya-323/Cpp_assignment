#include<iostream>
#include<fstream>
#include<cstdio>
using namespace std;
//delete a record
int main(){
    
     ifstream in("emp.txt");
     ofstream out("temp.txt");
    
    int delete_id;
    cout<<"Enter id to be updated:";
    cin>>delete_id;
    int id;
    string name;
    

    while(in>>id>>name){
    if(id==delete_id){
        out<<id<<" "<<name<<endl;
}
    }
    
in.close();
out.close();
remove("emp.txt");
rename("temp.txt","emp.txt");
cout<<"Record deleted"<<endl;
}