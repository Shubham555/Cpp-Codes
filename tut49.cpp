/***************** Initialization list/section in Constructors  ***********************/

#include <bits/stdc++.h>
using namespace std;
/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/
class test
{
    int a;
    int b;

public:
    // test(int i,int j): a(i),b(j)
    // test(int i,int j): a(i),b(i+j)
    // test(int i,int j): a(i),b(a+j)
    // test(int i,int j): a(i),b(2*j)
    //test(int i, int j) : b(j), a(i+b) //this will give an error bcoz 'initilization of 'a' is 1st as 'a' declared 1st.
    test(int i, int j) : a(i), b(j)
    {
        /* a=i;
           b=j;
       this our normal way of initiliazation variables/data members
       */
        cout << "Constructor executed" << endl;
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
    }
};

int main()
{
    test t(4, 6);
    return 0;
}