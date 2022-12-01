#include <iostream>
using namespace std;

inline int product(int a, int b){ 
     // Not recommended to use below lines with inline functions
    // static int c=0; // This executes only once
    // c=c+1;  // Next time this function is run, the value of c will be retained                              
    /// return a*b+c;
     return a*b;                // inline fuction used when the fuction body is very less
                                 //...program or code is chota.   
    }                        // --> inline function gives this one line short code  direct to the called
                           //...function 'product',in short it gives directly final return value to function

/******************* default arguments ********************************/ 
//always put defult arguments at right side or at the end.

float moneyrecieved(int currentmoney, float factor=1.04){ //---> here by default value is given to flaot factor i.e.1.04
    return currentmoney*factor;
}
/****************** constant arguments *********************/

// int strlen("const" char *p){

// }
int main(){
    /*int a,b;
    cout<<"Enter the value of a and b"<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is "<<product(a,b)<<endl;*/
    
    //cout<<"the product of a and b is "<<product(a,b)<<endl;
    //cout<<"the product of a and b is "<<product(a,b)<<endl;
    //cout<<"the product of a and b is "<<product(a,b)<<endl;
    //cout<<"the product of a and b is "<<product(a,b)<<endl;
    int money=100000;
    cout<<" if your money is "<<money<<"rs in your bank account,you will recieve"<<moneyrecieved(money)<<"rs after 1 year"<<endl;
    // so here 2nd argument is not given by me so it takes by "default arguments"
    cout<<" for VIP:if your money is "<<money<<"rs in your bank account,you will recieve"<<moneyrecieved(money,1.1)<<"rs after 1 year";
    return 0;
}



