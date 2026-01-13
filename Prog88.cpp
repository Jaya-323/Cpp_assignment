#include<iostream>
using namespace std;
class base{
        public:
        string word;
        void input(){
            cout<<"The data  is:"<<" "<<word<<endl;
        }
    };
class derived : public base{
    public:
    void showbasedata(){
        cout<<"The data stored in base class is:"<<endl;
        input();
    }
};
int main(){
    derived d;
    d.word="The derived class is accessing the member of base class";
    d.input();
    d.showbasedata();
}