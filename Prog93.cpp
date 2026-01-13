#include<iostream>
using namespace std;
class first{
    public:
    first(){
        cout<<"Constructor number one"<<endl;
    }
    void showA(){
        cout<<"This is first class"<<endl;
    }
};
//Derived class 1
class sec:virtual public first{
public:
sec(){
    cout<<"Constructor number 2"<<endl;

}
};
//Derived class 2
class third:virtual public first{
    public:
    third(){
        cout<<"Constructor number 3"<<endl;
    }
};
class fourth:public sec,public third{
public:
fourth(){
    cout<<"Constructor number 4"<<endl;
}
};
int main(){
    fourth obj;
    obj.showA();
    
}