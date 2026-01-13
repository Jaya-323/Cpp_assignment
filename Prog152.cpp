#include<iostream>
using namespace std;
//program rethroing an exception
void checknum(int n){
    try{
        if(n<0){
            throw n;
        }
    }
    catch(int x){
        cout<<"Exception caught in checknum():"<<" "<<x<<endl;
        throw;
    }
}
int main(){
    try{
        checknum(-7);
    }
    catch(int x){
        cout<<"Exception caught again in main():"<<x<<endl;
    }

}