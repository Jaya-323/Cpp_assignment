#include<iostream>
using namespace std;
//Program for student mark processing using inheritance
class student{
    private:
    int roll;
    string name;
    public:
    void getstudent(){
        cout<<"enter the roll number:"<<" ";
        cin>>roll;
        cin.ignore();
        cout<<"Enter name:";
        getline(cin,name);

    }
    void display(){
        cout<<"Roll number:"<<" "<<roll<<endl;
        cout<<"Name:"<<" "<<endl;

    }

};
class marks:public student{
private:
int m1,m2,m3;
int total;
float avg;
public:
void getmarks(){
    cout<<"Enter marks for 3 subjects:"<<endl;
    cin>>m1>>m2>>m3;

}
void calculate(){
    total=m1+m2+m3;
    avg=total/3.0;

}
void dispalyresult(){
    cout<<"Marks are:"<<m1<<" "<<m2<<" "<<m3<<endl;
    cout<<"Total marks:"<<" "<<total<<endl;
    cout<<"Percentage:"<<" "<<avg<<endl;
}
};
int main(){
    marks m;
    m.getstudent();
    m.getmarks();
    m.display();
    m.calculate();
    m.dispalyresult();
    
}