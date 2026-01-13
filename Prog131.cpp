#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    //file creation or overwriting mode
    file.open("P.txt",ios::out);
    if(!file){
        cout<<"Error creating file"<<endl;
        return 1;
    }
    file<<"This line is written in output mode"<<endl;
    file.close();
    //Read mode
     file.open("P.txt",ios::in);
    if(!file){
        cout<<"Error! file not found"<<endl;
        return 1;
    }
   cout<<"Reading file"<<endl;
   string l;
   while(getline(file,l)){
    cout<<l<<endl;
   }
    file.close();
    //append mode
     file.open("P.txt",ios::app);
    if(!file){
        cout<<"Error opening file for appending"<<endl;
        return 1;
    }
    file<<"This line is written in output mode"<<endl;
    file.close();
}