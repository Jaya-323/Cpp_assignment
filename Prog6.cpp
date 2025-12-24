#include<iostream>
using namespace std;
int main(){
    int P , R , T;
    cout<<"Enter the principle amount:"<<endl;
    cin>>P;
    cout<<"Enter the rate:"<<endl;
    cin>>R;
    cout<<"Enter the time duration :"<<endl;
    cin>>T;
    float SI;
    SI=(P*R*T)/100.0;
    cout<<"Simple interest for the given amount its rate and time duration is:"<<SI<<endl;

}
