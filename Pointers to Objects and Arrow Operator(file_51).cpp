/*********************** Pointers to Objects and Arrow Operator  **************************/
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void getdata()
    {
        cout << "the value of real is " << real << endl;
        cout << "the value of imaginary is " << imaginary << endl;
    }
    void setdata(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
   // Complex c1;
   // Complex *ptr = &c1;
    Complex *ptr = new Complex; 

   // (*ptr).setdata(1,54); is exactly same as
    ptr->setdata(1,54);

  // (*ptr).getdata(); is as good as
    ptr->getdata();

    //array of objects
    Complex* ptr1 = new Complex[4];  //--> Array of 4 (Complex class's) objects.
    ptr1->setdata(1,4);
    ptr1->getdata();
   
  // just Advanced tried, but brief is in next video :) 
  // (ptr1+1)->setdata(3,4);
  // (ptr1+1)->getdata();
    return 0;
}
