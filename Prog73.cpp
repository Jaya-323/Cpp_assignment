#include<iostream>
using namespace std;
class employ{
    private:
    string name;
    int e_id;
    public:
    employ(string n,int id){
        name=n;
        e_id=id;
    }
    void display()const{
        cout<<"Name:"<<" "<<name<<" "<<"employ id:"<<" "<<e_id<<endl;
    }
};
int main()
{
const employ e("ABC",234);//const object
e.display();
 
}