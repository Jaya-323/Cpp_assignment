#include<iostream>
#include<fstream>
//copy file content from one file to another
using namespace std;
int main(){
    ifstream sourceFile("Practice.txt");
    ofstream destfile("copy.txt");
    if(!sourceFile){
        cout<<"Error source file not found"<<endl;
    }
    if(!destfile){
        cout<<"Cannot create destination file/copy of main file"<<endl;

    }
    char ch;
    while (sourceFile.get(ch))
    {
        destfile.put(ch);
    }
    cout<<"Content copied!"<<endl;
    sourceFile.close();
    destfile.close();
    
}