#include<iostream>
#include<fstream>
using namespace std;
//Program to read file until EOF
int main(){
    ifstream infile("copy.txt");
    if(!infile){
        cout<<"Error opening file"<<endl;
        return 1;

    }
    string word;
    cout<<"Reading a file contents until EOF"<<endl;
    while(infile>>word){
        cout<<word<<" ";
    }
    infile.close();

    
}