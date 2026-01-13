#include<iostream>
#include<fstream>
using namespace std;
//update a record
int main(){
    
     ifstream in("emp.txt");
     ofstream out("temp.txt");
    
    int search_id;
    cout<<"Enter id to be updated:";
    cin>>search_id;
    int id;
    string name;
    

    while(in>>id>>name){
    if(id==search_id){
        cout<<"Enter new name:"<<endl;
        cin>>name;
        
    }
    out<<id<<" "<<name<<endl;
}
in.close();
out.close();
remove("emp.txt");
rename("temp.txt","emp.txt");
cout<<"Record updated"<<endl;
}