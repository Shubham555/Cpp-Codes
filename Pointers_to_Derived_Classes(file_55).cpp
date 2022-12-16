/******************************Pointers to Derived Classes in C++*********************************/
#include<bits/stdc++.h>
using namespace std;

class BaseClass{
    public:
    int var_base;
    void display(){
        cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
    }
};
class DerivedClass: public BaseClass{
   public:
   int var_derived;
   void display(){
      cout<<"Dispalying Base class variable var_base "<<var_base<<endl;
      cout<<"Dispalying Derived class variable var_derived "<<var_derived<<endl;
   }
};
int main(){
   BaseClass* base_class_pointer; //this is main thing main declaration
 //  BaseClass* base_class_pointer = new BaseClass; /*this will also work no need to declare any objects-inbuild objects will form automatically bcoz of in this declartion*/
 
   BaseClass obj_base;
   DerivedClass obj_derived;
   base_class_pointer = &obj_derived;  // Pointing base class pointer to derived class

   base_class_pointer->var_base=34;
  // base_class_pointer->var_derived=349;  //will throw an error
   base_class_pointer->display();

   base_class_pointer->var_base=3400;
   base_class_pointer->display();

   DerivedClass* derived_class_pointer; //this is main thing main declaration
  // DerivedClass* derived_class_pointer = new DerivedClass; /*this will also work no need to declare any objects-inbuild objects will form automatically bcoz of in this declartion*/
  
   derived_class_pointer= &obj_derived;
   derived_class_pointer->var_base=9448;
   derived_class_pointer->var_derived=98;
   derived_class_pointer->display();

 return 0;
}
