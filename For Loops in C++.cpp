
#include <iostream>
using namespace std;

int main(){
    /*Loops in C++:
    There are three types of loops in C++:
        1. For loop
        2. While Loop
        3. do-While Loop
    */

    /*For loop in C++*/
    
    // Syntax for for loop
    // for(initialization; condition; updation)
    // { 
    //     loop body(C++ code);
    // }
    
   /* for(int i=1;i<=100;i++){
        
        cout<<i<<endl;
    } */
    
    // Example of infinite for loop
    // for (int i = 1; 34 <= 40; i++)
    // {
    //     /* code */
    //     cout<<i<<endl;
    // }
    
    /*while loop in C++*/
    // Syntax:
    // int a/i = (integer value); "initialization"
    // while("condition")
    // {
    //     C++ statements;
    //    i++; "updation"
    // }
   // printing 1 to 40 using while loop
   
  /* int i=1;
   while (i<=40){
       cout<<i<<endl;
       i++;
   }*/
   // Example of infinite while loop
    // int i = 1;
    // while (true)
    // {
    //     cout << i << endl;
    //     i++;
    // }
    
    /* do While loop in C++*/
        // Syntax:
        //i=interger; "initialization"
        // do
        // {
        //     C++ statements;
        // i++; "updation"
        // }while("condition");
        
        //  Printing 1 to 40 using while loop
       /* int i=1;
        do{
            cout<<i<<endl;
            i++;
        }while(i<=40);  // or while(false)<-- it will execute at least one statement i.e.cout<< */
        
      int n=7,mul;
     // cout<<"enter the value of number for whom you wnat mul table"<<endl;
    //  cin>>n;
      for(int i=1;i<=10;i++){
         mul=n*i;
          cout<<"the mul table of "<<n<<"x"<<i<<" is:"<<mul<<endl;
      }
    return 0;
}







