/******************************** this Pointer in C++ *************************************/
#include<bits/stdc++.h>
using namespace std;
class A{
    int a;
    public:
    // A & setdata(int a)
    void setdata(int a){
         this-> a=a;      //1st use of this keyword/pointer.
       // return *this; *(Any-inbuid-created-object); 
                         //2nd use of this keyword/pointer. // (returns the "value at the object"- *(&object)= *this).
    }
    void getdata(){
        cout<<"the value of a is "<<a<<endl;
    }
};
int main(){  
// 'this' is a keyword which is a pointer which points to the "object" which involkes the member function.
//'this' represent the object 'this->/anyother' which invokes/calls member function
//Like 'ptr' represemt the object 'ptr' which invokes/calls member function,
// Ex: ptr->setdata(4,5);
// this = &object
// *this = *(&object)
    A a;
    a.setdata(4);
    a.getdata();
 return 0;
}
