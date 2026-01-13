#include<iostream>
#include<fstream>
//Program for creatingfile
using namespace std;
int main(){
    ofstream outfile;
    outfile.open("Practice.txt");
    if(!outfile){
        cout<<"Error creating file!"<<endl;
        return 1;
    }
    outfile<<"Hello , this is a practice file"<<endl;
    outfile<<"This data is entered through c++"<<endl;
    cout<<"file created and data entered"<<endl;
    outfile.close();
}