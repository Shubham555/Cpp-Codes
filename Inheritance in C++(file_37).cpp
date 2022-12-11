
/************   Inheritance Syntax & Visibility Mode     ************/
#include <iostream>
using namespace std;
//Base class
class employee{
    public:
    int id;
    float salary;
    employee(int inpid){
        id = inpid;
        salary = 34.0;
    }
    employee(){}
};
// Derived Class syntax
/* class {{derived-class-name}} : {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
}
Note:
1.By default visibility-mode is private.
2.public visibility-mode:  public members of the base class becomes public members of the derived class.
3.private visibility-mode: public members of the base class becomes private members of the derived class.
4."Private members of a base class" will never become "the members of derived class" i.e. they are never inherited.
*/

// Creating a Programmer class derived from employee Base class.
class Programmer : public employee{
    public:
    
    int languagecode;
    Programmer(int inpid){
    id = inpid;
    languagecode =9;
    }
    void getdata(){
        cout<<id<<endl;
    }
};
int main(){
   employee harry(1),rohan(2);
   cout<<harry.salary<<endl;
   cout<<rohan.salary<<endl;
   
   Programmer skillf(10);
   cout<<skillf.languagecode<<endl;
   cout<<skillf.id<<endl;
   skillf.getdata(); 
    return 0;
}





