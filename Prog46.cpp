#include<iostream>
using namespace std;
class value{
    private:
    int v;
    public:
    void read(){
        cout<<"Enter the value:"<<" ";
        cin>>v;
    }
    int getValue(){
        return v;
    }
    void display(){
        cout<<"Value :"<<" "<<v<<endl;
    }
};
int main(){
value v1 ,v2;
v1.read();
v1.display();
v2.read();
v2.display();
if( v1.getValue()>v2.getValue()){
cout<< "Greater is:"<<" "<<v1.getValue()<<endl;

}

else if( v1.getValue()<v2.getValue()){
cout<< "Greater is:"<<" "<<v2.getValue()<<endl;

}

else{
    cout<<"Both are equal"<<endl;
}
}
