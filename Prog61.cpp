#include<iostream>

using namespace std;

class pointer{
    private:
    int x;
    public:
    void value(int x){
        this->x=x;
    }
    void display(){
        cout<<" Value of x is:"<<" "<<x<<endl;
    }
};
int main(){
pointer p;
p.value(9);
p.display();
}