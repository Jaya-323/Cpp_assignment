#include<iostream>
using namespace std;
//Employee payroll system
class employ{
    private:
    int empId;
    string name;
    public:
    void getdetails(){
        cout<<"Enter employee id:"<<endl;
        cin>>empId;
        cin.ignore();
        cout<<"Enter the name:"<<" ";
        getline(cin,name);

    }
    void displaydetails(){
        cout<<"Employee Id:"<<" "<<empId<<endl;
        cout<<"Employee name:"<<" "<<name<<endl;
    }
};
class payroll:public employ{
    private:
    int base , hra , da , gross;
    public:
    void getsalary(){
        cout<<"Enter basic salary:"<<endl;
        cin>>base;
        cout<<"Enter hra:"<<" ";
        cin>>hra;
        cout<<"Enter da"<<" ";
        cin>>da;

    }
    void calsalary(){
        gross=base+hra+da;
    }
    void displaysal(){
        displaydetails();
        cout<<"Basic salary:"<<" "<<base<<endl;
        cout<<"hra amount:"<<" "<<hra<<endl;
        cout<<"da amount:"<<" "<<da<<endl;
        cout<<"Gross salary:"<<gross<<endl;
    }

};

int main(){
    payroll p;
    p.getdetails();
    p.getsalary();
    p.calsalary();
    p.displaysal();
}