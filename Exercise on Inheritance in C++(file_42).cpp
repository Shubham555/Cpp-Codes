/**********  Exercise on Inheritance ***********

Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, /
       and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four
       scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?  --> Multiple Inheritance
    Q2. Which mode of Inheritance are you using? --> public SimpleCalculator, public ScientificCalculator
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/
#include<iostream>
#include <cmath>
using namespace std;

class SimpleCalculator{
    int num1,num2;
    int add,subtract,multi,divide;
    
    public:
    void setdata(int a1,int a2){
      num1=a1;
      num2=a2;
    }
    void simcal(){
         add=num1+num2;
     
         subtract=num1-num2;
    
         multi=num1*num2;
     
         divide=num1/num2;
    }
     void display_simcal(){
         cout<<"your all four simple operations results are "<<add<<" "<<subtract<<" "<<multi<<" "
         <<divide<<" "<<endl;
     }

};

class ScientificCalculator{
    int a,b;
    public:
    void setdata2(){
        cout<<"enter the value of a "<<endl;
        cin>>a;
        cout<<"enter the value of b "<<endl;
        cin>>b;
    }
   void display_sci_operations(){
       cout<<"the value of sin(a) is "<<sin(a)<<endl;
       cout<<"the value of cos(a) is "<<cos(a)<<endl;
       cout<<"the value of exp(a) is "<<exp(a)<<endl;
       cout<<"the value of tan(a) is "<<tan(a)<<endl;
   }
};

class HybridCalculator: public SimpleCalculator,public ScientificCalculator{
     //simply code reusability done here, bcoz by calling members function of both classes by-the object of this 
     //class in main fuction, whole codes in that member fuctions are reused :) for HybridCalculator class.
};

int main(){
 /*  SimpleCalculator o1;
    o1.setdata(5,5);
    o1.simcal();
    o1.display_simcal();   */
    
/*    ScientificCalculator o1;
    o1.setdata();
    o1.display_sci_operations();   */
     
   HybridCalculator o2;
    o2.setdata(5,5);
    o2.simcal();
    o2.display_simcal();
    o2.setdata2();
    o2.display_sci_operations();
    return 0;
}   

