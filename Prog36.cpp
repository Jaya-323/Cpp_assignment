#include<iostream>
using namespace std;

int main(){
int r1, r2, c1 , c2;
cout<<"Enter row size  for 1st array:"<<" ";
cin>>r1;
cout<<"Enter row size  for 2nd array:"<<" ";
cin>>r2;
cout<<"Enter column size for 1st array:"<<" ";
cin>>c1;
cout<<"Enter column size for 2nd array:"<<" ";
cin>>c2;
int a[r1][c1],b[r2][c2],c[r1][c2];
if(c1!=r2){
    cout<<"Multiplication not possible"<<endl;

    
}
else{
cout<<"Enter 1st array :"<<endl;
for(int i=0;i<r1;i++){
    
    for(int j=0;j<c1;j++){
        cin>>a[i][j];
    }
}
cout<<"Enter 2nd array :"<<endl;
for(int i=0;i<r2;i++){
    
    for(int j=0;j<c2;j++){
        cin>>b[i][j];
    }
}
cout<<"1st array is:"<<endl;
for(int i=0;i<r1;i++){

    for(int j=0;j<c1;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
cout<<" 2nd array is:"<<endl;
for(int i=0;i<r2;i++){
    
    for(int j=0;j<c2;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
}
int i,j,k;
for( i=0;i<r1;i++){
    for( j=0;j<c2;j++){
        c[i][j]=0;
    
    for( k=0;k<r2;k++){//OR k<c1
      c[i][j]+=a[i][k]*b[k][j];
    }
}
}
cout<<"Multiplication of the matrix is:"<<endl;
for(i=0;i<r1;i++){
    for( j=0;j<c2;j++){
        cout<<c[i][j]<<" ";
    }
    cout<<endl;
}
}
}