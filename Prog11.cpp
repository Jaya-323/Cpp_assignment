#include<iostream>
using namespace std;

int main(){
    int  n , m;
    cout<<"Enter the numbers:"<<endl;
    cin>>m>>n;
    int cal;
    cout<<"Select the calculation need to perform(1->(+) ,2-> (-) ,3->(*) , 4->(/) ,5-> (%)):"<<endl;
    cin>>cal;

    switch (cal)
    {
    case 1:
    //additon
        cout<<"Sum is :"<<m+n<<endl;
        break;
    case 2:
    //subtraction
        cout<<"difference is :"<<m-n<<endl;
        break;
    case 3:
    //mutiplication
        cout<<"product  is :"<<m*n<<endl;
        break;
    case 4:
    //division
        cout<<"Quotient is :"<<m/n<<endl;
        break;    
     case 5:
    //Modulo
        cout<<"Remainder  is :"<<m%n<<endl;
        break;        
    default:
    cout<<"Invalid input"<<endl;
        break;
    }

}