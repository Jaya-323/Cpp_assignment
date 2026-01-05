#include<iostream>
using namespace std;

//Pointers basic operation 
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int n , m ;
cout<<"Enter the numbers:"<<" ";
cin>>n>>m;
cout<<"Numbers before swap are:"<<" "<<n<<" "<<m<<endl;
 swap(&n,&m);
cout<<"Numbers after swap are:"<<" "<<n<<" "<<m<<endl;
int *ptr=&n;
cout<<"Address of 1st number is :"<<" "<<ptr;
}