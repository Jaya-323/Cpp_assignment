#include<iostream>
#include<fstream>
#include<sstream>

using namespace std;
int main(){
    ifstream infile("Practice.txt");
    if(!infile){
        cout<<"Error ! file not found"<<endl;

    }
    string word;
    int wordcnt=0;
    while(infile>>word){
        wordcnt++;

    }
    cout<<"Total words in a file is"<<" "<<wordcnt<<endl;
    infile.close();
}