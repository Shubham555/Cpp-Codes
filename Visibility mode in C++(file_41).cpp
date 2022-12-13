
#include <iostream>
using namespace std;

// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

class base1{
  protected:
  int base1int;
  public:
  void set_base1int(int a){
      base1int=a;
  }
};

class base2{
  protected:
  int base2int;
  public:
  void set_base2int(int a){
      base2int=a;
  }
};

class base3{
  protected:
  int base3int;
  public:
  void set_base3int(int a){
      base3int=a;
  }
};


class derived:public base1,public base2,public base3{
    public:
    void show(){
        cout<<"the value of base1 is "<<base1int<<endl;
        cout<<"the value of base2 is "<<base2int<<endl;
        cout<<"the value of base3 is "<<base3int<<endl;
        cout<<"the value of sum of base1,base2 and base3 is "<<base1int+base2int+base3int<<endl;
    }
};
/*
The inherited derived class will look something like this
Data members:
   base1int --> protected;
   base2int --> protected;
   
   Member functions:
   set_base1int() --> public
   set_base2int() --> public
   set_base3int() --> public
   void show() -----> public
*/
int main(){
    derived der;
    der.set_base1int(25);
    der.set_base2int(5);
    der.set_base3int(15);
    der.show();
    return 0;
}

