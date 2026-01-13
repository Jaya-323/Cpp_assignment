#include<iostream>
using namespace std;
class counter{
    private:
    static int cnt;//static data member
    public:
    counter(){
        cnt++;
    }
    static void showcnt(){//Static member function
        cout<<"Total objects created:"<<cnt<<endl;
    }
};
int counter::cnt=0;
int main(){
counter c1,c2,c3,c4;
counter::showcnt();
}