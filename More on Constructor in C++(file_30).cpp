//More on Constructors
#include <iostream>
using namespace std;


class complex{
    int a,b;
    public:
 

    complex(int , int ); //Constructor declaration
    
    void printnumber(void){
        cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
    }
};
complex:: complex(int x, int y){ //---> This is a "parameter constructor" as it takes "parameters/arguments/values".
    a=x;  // this parameterized values.
    b=y;
 //  cout<<"hello world";
}
int main(){
    // Implicit call
    complex a(4,6);
    a.printnumber();
    
    /* Explicit call
    
    complex b= complex(5,7);
    b.printnumber();  
    */
    return 0;
}






