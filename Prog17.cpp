#include<iostream>
using namespace std;
int main(){

    int user , host;
    cout<<"Host enter the number:"<<endl;
    cin>>host;
    system("cls");
    cout<<"User entered number(guess the number that is entered by the host):";
    cin>>user;
    //Ternary operator 
    (user==host)?cout<<"Correct! you got it.":cout<<"Oops ! , you got it wrong better luck next time"<<endl;

}