#include<iostream>
using namespace std;
class show{
private:
int a;
int b;
public:
 show(int x,int y){
  a=x;
  b=y;
  cout<<"Values are:"<<x<<" "<<y;
 }
};
int main(){
 show sh(5,2);
}