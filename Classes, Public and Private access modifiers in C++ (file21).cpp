//Classes, Public and Private access modifiers in C++ 
#include <iostream>
using namespace std;

class employee{
    private: 
    int a,b,c;
    
    public:
    int d,e;
    void setdata(int a1,int b1,int c1); // just declaration
    void getdata(){            // here function getdata() we used it only for printing Values,no values it takes.
        cout<<"the value of a is "<<a<<endl;
        cout<<"the value of b is "<<b<<endl;
        cout<<"the value of c is "<<c<<endl;
        cout<<"the value of d is "<<d<<endl;
        cout<<"the value of e is "<<e<<endl;
    }
};
void employee:: setdata(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;
}
int main(){
    employee harry;
/*  harry.a=6; //-> this will give an error bcoz 'a' declared parivately,so cant access
              its value openly/publically,it need functoins to keep privacy (like setdata)  */
    harry.d=4;
    harry.e=5;
    harry.setdata(1,2,3);
    harry.getdata();

    return 0;
}

