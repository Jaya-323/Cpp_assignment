#include<iostream>

using namespace std;
//Program to print largest element in an array
int main(){
    int n;
    cout<<"enter size of an array:"<<" ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    cout<<"Array elements are:"<<endl;
     for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
        
    }
    for(int i=0;i<n;i++){
       if(arr[i]>arr[i+1]){
         int temp=arr[i];
          arr[i]=arr[i+1];
          arr[i+1]=temp;
       }

    }
    int max=0;
    
    for(int i=0;i<n;i++){
       max=arr[n-1];
     
    }
    cout<<"Largest element in the array is :"<<" "<<max<<endl;

}