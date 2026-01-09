#include<iostream>
using namespace std;
class data{
    public:
    static int count;
    data(){
        count++;
    }
    static void countshow(){
        cout<<"Number of objects created is:"<<" "<<count<<endl;

    }
};
int data::count=0;
int main(){
data d1,d2,d3;
data::countshow();
}