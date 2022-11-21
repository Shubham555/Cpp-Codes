#include <iostream>
using namespace std;
int glo=6;

void sum(){
    int a;
    cout<<glo<<endl;
} 

int main(){
    int glo=10;
     glo=13;
     //int a=4;
     //int b=8;
     int a=14,b=45;
     float pi=3.14;
     char c ='d';
     bool bo=true;
     
     sum();            // --> sum is called since sum has no its own glo varible it search for any global variable 
                       //then global variable glo is printed,and after that local varible of main is printed 
     cout<<glo<<endl<<bo;    // precedance is always for lacal and agar local { } me nhi mila to then global
                             // varible is called and printed.
/*  cout<<"this is tutorial 4.\nthe value of a is:"<<a <<"\nthe value of b is:"<<b;
    cout<<"\nthe value of pi is:"<<pi;
    cout<<"\nthe value of c is:"<<c;   */
    return 0;
}




