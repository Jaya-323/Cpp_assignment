#include<iostream>
#include<string>
using namespace std;
int countstr(string str){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
        
    }
    return count;
}
int main(){
string str;
cout<<"Enter your string:"<<" ";
getline(cin , str);
cout<<"Length of string is:"<<" "<<countstr(str);
}

