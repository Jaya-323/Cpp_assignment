#include<iostream>
using namespace std;

int main(){
    int n;//PROGRAM TO ERVERSE AN ARRAY
    cout<<"enter size:"<<endl;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<"Array before reversing:"<<endl;
     for(int i=0;i<n;i++){
        cout<<a[i]<<endl;

    }
    for(int i=0;i<n;i++){
        b[i]=a[n-i-1];

    }
    cout<<"Reversed array is:"<<endl;
     for(int i=0;i<n;i++){
        cout<<b[i]<<endl;

    }
}