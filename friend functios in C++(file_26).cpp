/******************* friend functios ***********************/
#include <iostream>
using namespace std;
// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i <---- complex numbers & addition.
class complex{
    int a,b;
    //declared that ki below's "sumcomplex function" is my "friend function"
    /* Below line means that "non member funtion" i.e - sumComplex funtion is allowed to 
     do anything with my private parts.(data variable/members) as my friend funtion */
    
    friend complex sumcomplex(complex o1,complex o2); 
    
    public:
    void setnumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    void printnumber(void){
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};
complex sumcomplex(complex o1, complex o2){ // this is not member functions of class complex 
                    // the member functions here are  - void setnumber(); & void printnumber(); ok! 
    complex o3;     // and data variable/members are a,b.
    o3.setnumber((o1.a+o2.a),(o1.b+o2.b));
    return o3;
}

int main(){
     complex c1,c2,sum;
     c1.setnumber(1,4);
     c1.printnumber();
     
     c2.setnumber(5,8);
     c2.printnumber();
     
     sum = sumcomplex(c1 ,c2);
     sum.printnumber();
     
    return 0;
}
/* Properties of friend functions-
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class, c1.sumComplex() == Invalid
3. Can be called/invoked without the help of any object
4. Usually contains the objects as its arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and so it needs: member function with- object_name.member_name to access any member.

*/


