#include<iostream>
#include<string>
using namespace std;
//Read and dispaly employ details using class
class employ{
  private:
   string name;
   int id;
   int sal;
   public:
   void read(){
    cout<<"Enter employ name:"<<" ";
    getline(cin,name);
    cout<<"Employ id:"<<" ";
    cin>>id;
    cout<<"Employ salary:"<<" ";
    cin>>sal;
   }
   void display(){
    cout<<"Employ name is:"<<" "<<name<<endl;
    cout<<"Employ id:"<<" "<<id<<endl;
    cout<<"Employ salary:"<<" "<<sal<<endl;
   }
};
int main(){
    employ e;
    e.read();
    e.display();
}