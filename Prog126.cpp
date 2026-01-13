#include<iostream>
#include<fstream>
//program for writing file content
using namespace std;
int main(){
    ofstream outfile;
     outfile.open("Practice.txt");
    if(!outfile){
        cout<<"Error creating file!"<<endl;
        return 1;
    }
    outfile<<"next , program to write in a file"<<endl;
    outfile<<"This is an assignment of c++"<<endl;
    cout<<"file created and data entered"<<endl;
    outfile.close();
    
}