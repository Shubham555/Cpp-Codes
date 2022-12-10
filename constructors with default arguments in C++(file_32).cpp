
/*************** constructors with default arguments *************/
#include <iostream>
using namespace std;
class simple{
    int data1,data2,data3;
    public:
    simple(int a, int b=9,int c=8){
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printdata();
};
void simple:: printdata(){
    cout<<"your data1 and data2 is "<<data1<<", "<<data2<<" and "<<data3<<endl;
}
int main(){
    simple s(1,7);
    s.printdata();
    return 0;
}



