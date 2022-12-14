/*************************** Revisiting Pointers: new and delete Keywords **********************************/
#include<bits/stdc++.h>
using namespace std;
int main(){
    //basic example
    int a = 4;  
    int* ptr = &a;// jaise 'a' variable me 'Integer-datatype ki-value' store krne ke liye 'int' data type se declare 
    *ptr = 999;    //          kiya jata hai aurr fir 'a' me value store ho jata hai.
 //    |    |        // waise he 'ptr' variable me 'Integer-datatype ka-address' store krne ke liye 'int*' data type se declare
 // *(&a) =999;              // kiya jata hai aurr fir 'ptr' me address store ho jata hai  :) */
    float b= 5;  
    float* ptr2 = &b;            
  
    cout<<"address of a is "<<ptr<<endl;
    cout<<"address of b is "<<ptr2<<endl;
    cout<<"value of a is "<<*ptr<<endl;  
    cout<<"value of b is "<<*ptr2<<endl;

    //new keyword  (run time pr memory allocate krne ka kam karta hai i.e. dynamicallly memory allocate).
   // int* p = new int(40); //dynamically integer bana diya with value also(run time pr)
    float* p = new float(40.78);
    cout<<"value at address of p is "<<*p<<endl;

    int* arr = new int[3];
    arr[0]=10;
    *(arr+1)=20;          // i.e. arr[1]=20;
    arr[2]=30;
  //  delete[] arr;
    cout<<"the value of arr[0] is "<<arr[0]<<endl;
    cout<<"the value of arr[1] is "<<arr[1]<<endl;
    cout<<"the value of arr[2] is "<<arr[2]<<endl;
    //delete keyword
    return 0;
}