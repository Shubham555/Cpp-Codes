/*************************  Virtual Functions in Cpp ************************/
#include<bits/stdc++.h>
using namespace std;

class BaseClass{
    public:
    int var_base=1;
/* virtual fuction bs last video wali Default behaviour se aane wali error ko override krne ke liye ,Virtual Function declare kiya jata hai basss.... :) */
   
   virtual void display(){
        cout<<"1 Dispalying Base class variable var_base "<<var_base<<endl;
    }
};
class DerivedClass: public BaseClass{
   public:
   int var_derived=2;
   void display(){
      cout<<"2 Dispalying Base class variable var_base "<<var_base<<endl;
      cout<<"2 Dispalying Derived class variable var_derived "<<var_derived<<endl;
   }
};

int main(){
  BaseClass* base_class_pointer;
  BaseClass obj_base;
  DerivedClass obj_derived;
  
  base_class_pointer = &obj_derived;  //oibject se binding ho re rahi hai display (); function ki.
  base_class_pointer-> display();  // Ab function derived ka class run hoga ,Jo ki last video me nhi ho raha tha.

  // Extraa try:
  base_class_pointer-> var_base=3;
 // base_class_pointer-> var_derived=4;  //same error as last video.
  base_class_pointer-> display();
 return 0;
}