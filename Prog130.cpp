#include<iostream>
#include<fstream>
//Program to append data in a file
using namespace std;
int main(){
     ofstream outfile;
    outfile.open("Practice.txt",ios::app);
    if(!outfile){
        cout<<"Error creating file!"<<endl;
        return 1;
    }
    outfile<<"data is not overwriting it is appending"<<endl;
    outfile<<"This data is appended through data handling"<<endl;
    cout<<"Data appended"<<endl;
    outfile.close();
}