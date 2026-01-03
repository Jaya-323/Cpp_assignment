#include<iostream>
using namespace std;

int main(){
    int i=1;
    loop:
    cout<<i<<endl;
    i++;
    while(i<=5){//simple program using goto to print numbers from 1 to 5
        goto loop;
    }
    
}
