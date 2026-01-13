#include<iostream>
using namespace std;
void test(int x) throw(int){
    if(x==0){
        throw x;
    }
    cout<<"No exception found"<<endl;
}
int main(){
    try{
        test(0);

    }
    catch(int i){
        cout<<"Integer exception."<<" "<<i<<endl;
    }
}
