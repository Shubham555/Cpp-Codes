//Ambiguity resolution
#include <iostream>
using namespace std;
class base1{
  public:
  void greet(){
      cout<<"How are you?"<<endl;
  }
};
class base2{
    public:
    void greet(){
        cout<<"Kaise ho?"<<endl;
    }
};

class derived :public base1,public base2{
   int a;
   public:
   //idhar derived ko khud ka greet() nahi hai so isliye base1/base2 me se greet() kiska lena hai wo define kiye
  // jata hai aur usiko "Ambiguity resolved" kahate hai.
    void greet(){
        base1:: greet(); //or we can give "base2:: greet();" for printing base2's greet function.
    }
};
class B{
    public:
    void say(){
     cout<<"hello world"<<endl;
    }
};
class D:public B{
    int a;
    // D's new say() method will override B class's say() method.
    public:
    void say(){
        cout<<"hello my beatuful peoples"<<endl;
    }
};

int main()
{  
  // Ambiguity 1 --> officially Ambiguity resolution'
  /*  base1 b1;
   base2 b2; 
    b1.greet();
   b2.greet();
   derived d;
   d.greet(); */
    
  // Ambiguity 2 ---> self Ambiguity resolved by overriding the function of B.
     //  means derived D ko khud ka say(); hai wo print ho jayega,upper B/C me confuse hone ki jarurat nai hai.
  B b;
  b.say();
  D d;
  d.say();
    return 0;
}


