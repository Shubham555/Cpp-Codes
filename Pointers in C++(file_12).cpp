#include <iostream>
using namespace std;

int main(){
       // What is a pointer? ----> Data type which holds the address of other data types
       int a=3;
       int* b;
       b = &a;
        
        // & ---> (Address of) Operator
       cout<<"the address of a is "<<&a<<endl;
       cout<<"the address of a is "<<b<<endl;
      
       // * ---> (value at) dereference Operator
       cout<<"the value at address b is "<<*b<<endl;
       //cout<<"the value of a is "<<a<<endl;
      // cout<<"the value of a is "<<*b<<endl;
      
      
      // Pointer to pointer
      int** c = &b;
      cout<<"The address of b is "<<&b<<endl;
      cout<<"The address of b is "<<c<<endl; 
      cout<<"The value at address c is "<<*c<<endl; 
      cout<<"The value at address value_at(value_at(c)) is "<<**c<<endl; 
        
    return 0;
}



