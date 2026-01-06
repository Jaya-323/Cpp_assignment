#include<iostream>
using namespace std;
class rectangle{
    private :
    int length;//Private members
    int breadth;
    public:
    //Public members
     void dimension(int l , int b){//Dimension setting member
        length=l;
        breadth=b;

    }
    int getlength(){//length getter member
        return length;
    }
     int getbreadth(){//breadth getter member
        return breadth;
    }

    int  area(){//Area calculation member
         return length*breadth;
    }
    void display(){//Area display member
        cout<<"Length:"<<length<<endl;
        cout<<"Breadth:"<<breadth<<endl;
        cout<<"Area:"<<area()<<endl;
    }
};
int main(){
    rectangle r;
    r.dimension(3,7);
    r.getlength();
    r.display();
}