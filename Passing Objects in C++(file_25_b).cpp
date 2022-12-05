 

//*****passing "objects, as function arguments" to functions.(Member functoins/ methods).******//
#include <iostream>
using namespace std;

class complex{
  int a;  // --> these are by default "private: data members/ data variable"
  int b;
  
  public:
  void setdata(int v1, int v2){
      a=v1;
      b=v2;
  }
  void setdatabysum(complex o1, complex o2){ // here "function arguments are objects-c1 & c2".
     a= o1.a + o2.a;   // c3(a ,b )here value a and b of this complex number c3 are obtained as follow,by suming others c1 & c2's a,a and b,b
     b= o1.b + o2.b;   // c3'a i.e. a = c1.a + c2.a;
                       // c3'b i.e. b= c1.b + c2.b;
  }
  void print(void){
      cout<<"your complex number is "<<a<<"+"<<b<<"i"<<endl;
  }
};

int main(){
    complex c1,c2,c3;
    c1.setdata(1,2);
    c1.print();
    
    c2.setdata(3,4);
    c2.print();
    
    c3.setdatabysum(c1,c2); // passing "objects, as function arguments" to functions.(Member functoins/ methods).  
    c3.print();
   
    return 0;
}



