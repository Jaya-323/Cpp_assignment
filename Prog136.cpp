#include<iostream>
#include<fstream>
using namespace std;
//program to check file existence
int main(){
    ifstream file("P.txt");
    if(file){
        cout<<"File exists "<<endl;
    }
    else{
        cout<<"File do not exist"<<endl;
    }
}