#include<iostream>
#include<fstream>
//Program for reading file content
using namespace std;
int main(){
    ifstream inFile;
    inFile.open("Practice.txt");
   if(!inFile){
    cout<<"error reading file"<<endl;
    return 1;

   }
   cout<<"Reading file line by line"<<endl;
   string line;
   while(getline(inFile,line)){
    cout<<line<<endl;
   }
   
}