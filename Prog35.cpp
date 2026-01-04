#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"enter the numbers:"<<" ";
    cin>>m>>n;
    int a[m][n] , b[m][n];
    cout<<"Enter the elements of 1st array :"<<endl;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }

     cout<<"Enter the elements of 2nd array :"<<endl;
    for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cin>>b[i][j];
        }
    }
    int c[m][n];
    
     for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"Matrix addition of these two arrays are:"<<endl;
       for(int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout<<c[i][j]<<endl;
        }
    }
    
    
}