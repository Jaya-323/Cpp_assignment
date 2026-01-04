#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter size of array:"<<endl;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Array elements are:"<<endl;
   for(int i=0;i<n;i++){
    cout<<a[i]<<endl;

   }
   
   int largest=a[0];
   int seclargest=-1;
   for(int i=1;i<n;i++){
    if(a[i]>largest){
        seclargest=largest;
        largest=a[i];
    }
    else if(a[i]>seclargest && a[i]!=largest){
        seclargest=a[i];

    }
   }
   cout<<"Second largest element is:"<<seclargest;
}