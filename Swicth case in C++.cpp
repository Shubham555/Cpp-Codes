
#include <iostream>
using namespace std;

int main(){
   // cout<<"this 9th tutorial";
   int age;
   cout<<"enter your age"<<endl;
   cin>>age;
   
   // 1. "selection" control structure: if else-if else ladder 
   /*if((age<18)&& (age>0)){
       cout<<"you can not come to my party"<<endl;
   }
   else if(age==18){
       cout<<"you are kid you will get a kide pass to the party"<<endl;
   }
   else if(age<1){
       cout<<"you are not yet born"<<endl;
   }
   else{
       cout<<"you can come to the party"<<endl;
   }*/
   // 2. "selection" control structure: switch case statement
   switch (age){
       case 18:
       cout<<"your age is 18"<<endl;
       break; 
       
       case 22:
       cout<<"your age is 22"<<endl;
       break; 
       
       case 2:
       cout<<"your age is 2"<<endl;
       break;
       
       default :
       cout<<"no special cases"<<endl;
       break;
   }
    cout<<"done with switch case";
    
    return 0;
} 


