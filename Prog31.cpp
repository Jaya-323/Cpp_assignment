#include<iostream>

using namespace std;
//PROGRAM TO TAKE INPUT AND DISPLAY ARRAY ELEMENTS
int main(){
    int n;
    cout<<"Enter the size of array:"<<" ";
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }
}