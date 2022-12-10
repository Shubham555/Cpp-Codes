 
/******************* constructor overloding (like function overloading) ********************/
#include <iostream>
using namespace std;
class complex{
    int a,b;
    public:
    //int a;
    complex(){
        a=0;
        b=0;
    }
    complex(int x, int y){
        a=x;
        b=y;
    }
    
    complex(int x){
        a= x;
        b= 0;
    }
    
    void printnumber(void){
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl; // So eth "class chya Scope" madhi private members sobt
  // khelu shakta pn member functions Vaprun br! js ki "printnumber();" ok! pn "scope chya bahir" swata constructors 
 // asun te suddha khelu shakanat private members(variable) sobt.
        }
};
int main(){
   complex c1(4,6);
 //  cout<<c1.a<<endl;   private member 'a' so cant print, for printing 'a' declare it in Public section :)
   c1.printnumber();
   
   complex c2(5);
   c2.printnumber();
   
   complex c3;
   c3.printnumber();
    return 0;
}




