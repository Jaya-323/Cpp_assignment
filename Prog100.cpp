#include<iostream>
using namespace std;
//Abstract class
class shape{
    public:
    virtual void draw()=0;

};
class circle:public shape{
    public:
    void draw(){
        cout<<"Drawing circle"<<endl;
    }
};
class square:public shape{
public:
void draw(){
    cout<<"Drawing square"<<endl;
}
};
int main(){
    shape *s;
    square sq;
    s=&sq;
    s->draw();
    circle c;
    s=&c;
    s->draw();

}