#include<iostream>
using namespace std;
//Program showing virtual operator
class animal{
    public:
      virtual void show(){
        cout<<"Some animals live in land and some in water"<<endl;

      }


};
class classification:public animal{
public:
void show(){
    cout<<"Animals that can survive on both land and water are amphibians"<<endl;

}
};
int main(){
    animal *a;
    classification c;
    a=&c;
    a->show();


}