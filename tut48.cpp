/********************************** Constructors in Derived class ***********************************/
#include <bits/stdc++.h>
using namespace std;

class base1
{
    int data1;

public:
    base1(int i)
    {
        data1 = i;
        cout << "base1 class constructor called" << endl;
    }
    void printdata1()
    {
        cout << "the value of data1 is " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int i)
    {
        data2 = i;
        cout << "base2 class constructor called" << endl;
    }
    void printdata2()
    {
        cout << "the value of data2 is " << data2 << endl;
    }
};

class derived : public base2, public base1
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base1(a), base2(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called" << endl;
    }
    void printdataderived()
    {
        cout << "the value of derived1 is " << derived1 << endl;
        cout << "the value of derived2 is " << derived2 << endl;
    }
};

int main()
{
    derived harry(1, 2, 3, 4);
    harry.printdata1();
    harry.printdata2();
    harry.printdataderived();
    return 0;
}
/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/
